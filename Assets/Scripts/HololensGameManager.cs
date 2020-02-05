using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.SceneManagement;

using Photon.Pun;
using Photon.Realtime;
using System;

namespace HCI.UD.KinectSender
{
    public class HololensGameManager : MonoBehaviourPunCallbacks
    {

        #region Photon Callbacks

        /// <summary>
        /// Called when the local player left the room. We need to load the launcher scene. 
        /// </summary>
        /// 

        public override void OnLeftRoom()
        {
            SceneManager.LoadScene(0);
        }
        public override void OnPlayerEnteredRoom(Player other)
        {
            Debug.LogFormat("OnPlayerEnteredRoom() {0}", other.NickName); //not seen if you're the player connecting 

            if (PhotonNetwork.IsMasterClient)
            {
                Debug.LogFormat("OnPlayerEnteredRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient);
                LoadArena();
            }
        }

        public override void OnPlayerLeftRoom(Player otherPlayer)
        {
            Debug.LogFormat("OnPlayerLeftRoom {0}", otherPlayer.NickName);

            if (PhotonNetwork.IsMasterClient)
            {
                Debug.LogFormat("OnPlayerLeftRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient);
                LoadArena();
            }


        }

        #endregion

        #region Public Methods 

        public void LeaveRoom()
        {
            PhotonNetwork.LeaveRoom();
        }

        public void Exit()
        {
            Application.Quit();
        }

        #endregion


        #region Private Methods

        void LoadArena()
        {
            if (!PhotonNetwork.IsMasterClient)
            {
                Debug.LogError("PhotonNetwork : Trying to load a level but we are not the master client.");
                PhotonNetwork.LoadLevel("Hololens Room for " + PhotonNetwork.CurrentRoom.PlayerCount);
                //GameObject.Destroy(this.playerPrefab);
            }
            Debug.LogFormat("PhotonNetwork : Loading Level : {0}", PhotonNetwork.CurrentRoom.PlayerCount);


        }


        public static HololensGameManager Instance;

        private void Start()
        {
            Instance = this;
            Debug.LogFormat("We are Instantiating LocalPlayer from {0}", Application.loadedLevelName);
            // we're in a room. spawin a character for the local player. it gets synced by using PhotonNetowrk.Instantiate
            if (PhotonNetwork.IsMasterClient)
            {
                //
                //Debug.LogFormat("We are instantiating localplayer from {0}", SceneManagerHelper.ActiveSceneName);

                // PhotonNetwork.Instantiate(this.playerPrefab.name, new Vector3(0f, .55f, 0f), Quaternion.identity, 0);

            }
            else
            {
                Debug.LogFormat("Ignoring scene load for {0}", SceneManagerHelper.ActiveSceneName);
            }
        }
        #endregion


    }
}

