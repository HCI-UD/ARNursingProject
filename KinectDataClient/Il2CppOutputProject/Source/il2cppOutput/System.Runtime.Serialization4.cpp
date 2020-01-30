﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Xml.XmlDictionaryString>
struct Dictionary_2_tA961D1A0C9E3B8629AE6FFDD6ADDDFDBCBDD92ED;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Base64Encoding
struct Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358;
// System.Text.BinHexEncoding
struct BinHexEncoding_tCC6A5A53F6E82CA945043CFE84D2F4BB101EB1C6;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.UTF8Encoding
struct UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.Xml.EncodingStreamWrapper
struct EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1;
// System.Xml.IXmlDictionary
struct IXmlDictionary_tD0F3BBE156B1852C4F838331308A811AD4AB15C5;
// System.Xml.OnXmlDictionaryReaderClose
struct OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240;
// System.Xml.PrefixHandle
struct PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93;
// System.Xml.StringHandle
struct StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE;
// System.Xml.UniqueId
struct UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A;
// System.Xml.ValueHandle
struct ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8;
// System.Xml.XmlBaseReader
struct XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269;
// System.Xml.XmlBaseReader/AttributeSorter
struct AttributeSorter_t119E3ACE7E567FE8AED51F86477552EE2427495C;
// System.Xml.XmlBaseReader/Namespace
struct Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71;
// System.Xml.XmlBaseReader/NamespaceManager
struct NamespaceManager_t6E38E1106AB1E20AA43B16CBCADBF923158925AE;
// System.Xml.XmlBaseReader/XmlAtomicTextNode
struct XmlAtomicTextNode_tDFAE6EC65DE6CD6DB1055BCA114ECADB1FBB851B;
// System.Xml.XmlBaseReader/XmlAttributeNode
struct XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D;
// System.Xml.XmlBaseReader/XmlAttributeNode[]
struct XmlAttributeNodeU5BU5D_t14A4EF50404F4DEF9FE20B15B0AFE27942DB1D9A;
// System.Xml.XmlBaseReader/XmlAttributeTextNode
struct XmlAttributeTextNode_tD0D863F095379F50FBB322B76F3159F3E7995C16;
// System.Xml.XmlBaseReader/XmlCDataNode
struct XmlCDataNode_t466D5083F8B29DAD8C615C555412026D474EABF4;
// System.Xml.XmlBaseReader/XmlClosedNode
struct XmlClosedNode_t35CFC7C73F3DED6240AFFEC5A3B9E2BE0124AE0F;
// System.Xml.XmlBaseReader/XmlCommentNode
struct XmlCommentNode_tC7CA5ECB98EC8FCC1AAA805B64B16642892AA2E6;
// System.Xml.XmlBaseReader/XmlComplexTextNode
struct XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C;
// System.Xml.XmlBaseReader/XmlDeclarationNode
struct XmlDeclarationNode_tF18E8BF011A44F0380942A5F3D8B600DA82CF3E5;
// System.Xml.XmlBaseReader/XmlElementNode
struct XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC;
// System.Xml.XmlBaseReader/XmlElementNode[]
struct XmlElementNodeU5BU5D_t780F02363A6F69724F1F01FB37C5310CE65BA89E;
// System.Xml.XmlBaseReader/XmlEndElementNode
struct XmlEndElementNode_tA0D981166CB8CFEEAF6E7197F219D9DC646D136B;
// System.Xml.XmlBaseReader/XmlEndOfFileNode
struct XmlEndOfFileNode_tB54011DC278F12923128D2D5393AF17FDB1260E9;
// System.Xml.XmlBaseReader/XmlInitialNode
struct XmlInitialNode_t4F08D36171C824A4C942D10312D7FB8BA46F7AF6;
// System.Xml.XmlBaseReader/XmlNode
struct XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0;
// System.Xml.XmlBaseReader/XmlTextNode
struct XmlTextNode_t3314BAFDFEA93B41FE7358E828C41A9878B4AE24;
// System.Xml.XmlBaseReader/XmlWhitespaceTextNode
struct XmlWhitespaceTextNode_tC982762FC475960453E77E05C137B70CF0A78F51;
// System.Xml.XmlBinaryReaderSession
struct XmlBinaryReaderSession_t8DAB759A1EC252C96B05AE26AAC29C85358C4D60;
// System.Xml.XmlBufferReader
struct XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A;
// System.Xml.XmlCanonicalWriter
struct XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08;
// System.Xml.XmlCanonicalWriter/Attribute[]
struct AttributeU5BU5D_tC5EAEF455AC745D1728EDD071651C02208217C3A;
// System.Xml.XmlCanonicalWriter/Scope[]
struct ScopeU5BU5D_t03F7139D05CF01B1BEEA0AEFB92C7F7066C51F28;
// System.Xml.XmlCanonicalWriter/XmlnsAttribute[]
struct XmlnsAttributeU5BU5D_t2349F96FF2998329871B48264D98BD7D0304699D;
// System.Xml.XmlDictionaryReader
struct XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61;
// System.Xml.XmlDictionaryReaderQuotas
struct XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2;
// System.Xml.XmlDictionaryString
struct XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20;
// System.Xml.XmlDictionaryString/EmptyStringDictionary
struct EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C;
// System.Xml.XmlDictionaryString[]
struct XmlDictionaryStringU5BU5D_t45938CD13E08066DFA4A011F061662E026E853D0;
// System.Xml.XmlException
struct XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D;
// System.Xml.XmlNameTable
struct XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6;
// System.Xml.XmlNodeWriter
struct XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5;
// System.Xml.XmlSigningNodeWriter
struct XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F;
// System.Xml.XmlStreamNodeWriter
struct XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29;
// System.Xml.XmlUTF8NodeWriter
struct XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1;
// System.Xml.XmlUTF8TextReader
struct XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TD_tA71E6C2E457FC0E0786A777FB5E7A09CE049A125_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t0ED1642D9D0E4F0F7CB233F75C42460578F8ABF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeType_tEE56AC4F9EC36B979516EA5836C4DA730B0A21E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____2A819C73D5892FC12A45F8232E1E03B764F9EB84_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____364A37E6F67B6074B93346D4E369336F4433B1C5_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____71599C20F1747A39DEDFB726ADBFA0E04AA71448_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____9E8419627B46E6737DEF6B4A11ED2CFF7138723F_10_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____CE27CB141098FEB00714E758646BE3E99C185B71_14_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04B25CD86FDECC78E44D6FF7676CE4C8CFEF0CFC;
IL2CPP_EXTERN_C String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
IL2CPP_EXTERN_C String_t* _stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194;
IL2CPP_EXTERN_C String_t* _stringLiteral09985C0635CC077F2EA007754B682EFA526F1F91;
IL2CPP_EXTERN_C String_t* _stringLiteral0C44A5310F13E19B270169781652CF4183211D53;
IL2CPP_EXTERN_C String_t* _stringLiteral155DEE1CD61616ABF8A4FC1644D819F1865E37FB;
IL2CPP_EXTERN_C String_t* _stringLiteral2004434E701A3933AFB96CDD5CF230E39B092F69;
IL2CPP_EXTERN_C String_t* _stringLiteral21606782C65E44CAC7AFBB90977D8B6F82140E76;
IL2CPP_EXTERN_C String_t* _stringLiteral261038AD75FEE541EDB50B8E89DD4F154F398F0D;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
IL2CPP_EXTERN_C String_t* _stringLiteral3384782D530992E6F6D9BBC1DC2481C82104F355;
IL2CPP_EXTERN_C String_t* _stringLiteral35B94102837FEED3F2A15B9E0FAD8120DC77329D;
IL2CPP_EXTERN_C String_t* _stringLiteral3F0BD819A9A57A95729A3BB224A730725E97D37B;
IL2CPP_EXTERN_C String_t* _stringLiteral3F657D500ABCC5CEA820F6AF12CFBCF8683DC232;
IL2CPP_EXTERN_C String_t* _stringLiteral417937288FDEE75EA79B1648FDB20AE19A1B35EA;
IL2CPP_EXTERN_C String_t* _stringLiteral41C8F3CDB42D08E9E572C874940CA5896DE03DB3;
IL2CPP_EXTERN_C String_t* _stringLiteral45197DBDAA2AE225BE3D7C260F0D98C9CE04E156;
IL2CPP_EXTERN_C String_t* _stringLiteral46E2449811DF8FBB99047B055608E11412656390;
IL2CPP_EXTERN_C String_t* _stringLiteral48EE9FDB6490AADC28BBB90CEE75350BE54532DE;
IL2CPP_EXTERN_C String_t* _stringLiteral499C260D15A9FDEDB1DACC59B7EBB15ED4B11C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral4AA2899807FF8CD8D087DEC1BD13FE036877E757;
IL2CPP_EXTERN_C String_t* _stringLiteral4D860A9BEFE72250C2B4250998B73E43B638A416;
IL2CPP_EXTERN_C String_t* _stringLiteral4E944ED4D64EA746CA5AD73FC7D5787CF0D735AB;
IL2CPP_EXTERN_C String_t* _stringLiteral4F470EF49186B25A50E5BC7B810EC0D9F6C5A021;
IL2CPP_EXTERN_C String_t* _stringLiteral5A6A1E0907BED5A04E10598C87777242E0234F60;
IL2CPP_EXTERN_C String_t* _stringLiteral5F8304770B6C7CF67F752A9A04C0B5BAED40917E;
IL2CPP_EXTERN_C String_t* _stringLiteral65F9BA3E3CDFFA500D8B5A924B3AD7C64800C996;
IL2CPP_EXTERN_C String_t* _stringLiteral6745335E8D4B2748B3B1DA63CCEA14C6A79558B4;
IL2CPP_EXTERN_C String_t* _stringLiteral7A0A94E897212727C5941381BDB1AFA1CE0A8F5D;
IL2CPP_EXTERN_C String_t* _stringLiteral7D420BCEB802121AF7B9C4287FF2901D898C7584;
IL2CPP_EXTERN_C String_t* _stringLiteral7F2649FDD61FAA07C78AB163DFC9398E051BF532;
IL2CPP_EXTERN_C String_t* _stringLiteral8ADC182DD6BF8AFACFADBFD69CB7F6CE40582472;
IL2CPP_EXTERN_C String_t* _stringLiteral90F9CBF1CB442F777C7C65817FF133A697274698;
IL2CPP_EXTERN_C String_t* _stringLiteral950CDE75A859B38EA2CDCCCDFAAADEE5E9CC06C8;
IL2CPP_EXTERN_C String_t* _stringLiteral97D361C1E9E9AB2CAFD243F894D71FEA14A9CDC1;
IL2CPP_EXTERN_C String_t* _stringLiteral9B911EF854C86016C2CCE7DE163BA92A2DC03124;
IL2CPP_EXTERN_C String_t* _stringLiteral9DBC4008A33D8E0DF953326F5E1D78277986D69A;
IL2CPP_EXTERN_C String_t* _stringLiteral9F792B61D0EC544D91E7AFF34E2E99EE3CF2B313;
IL2CPP_EXTERN_C String_t* _stringLiteralA62F2225BF70BFACCBC7F1EF2A397836717377DE;
IL2CPP_EXTERN_C String_t* _stringLiteralAFE3B98AFF8BD9E796D718F33E6FB099831ECC72;
IL2CPP_EXTERN_C String_t* _stringLiteralB259D122FB9F21E0B064528AD76518C107D0CD50;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralC47423B796CFCE3A6251C94EDCF1D2FA3E31B113;
IL2CPP_EXTERN_C String_t* _stringLiteralC82E3D7279EFA3ECA576370AF952C815D48CE41F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE649903DFFEB9A1DB533B87CFEF668CDEBA7B7F;
IL2CPP_EXTERN_C String_t* _stringLiteralDD335ACEBE621EC617D26FB86086F38EC9968913;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9F162F6EE6DF4C012E68735287405E318F59F8;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF160FCD5CCFA1403F690DD100EA7D0BAC6F382;
IL2CPP_EXTERN_C String_t* _stringLiteralE6A9FC04320A924F46C7C737432BB0389D9DD095;
IL2CPP_EXTERN_C String_t* _stringLiteralE934743A3310CC11B860F916F51F17F0CE6A58EA;
IL2CPP_EXTERN_C String_t* _stringLiteralEF08D7E5C024BE9848DE609B0087F3177509D61F;
IL2CPP_EXTERN_C String_t* _stringLiteralF18BFB74E613AFB11F36BDD80CF05CD5DFAD98D6;
IL2CPP_EXTERN_C String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
IL2CPP_EXTERN_C String_t* _stringLiteralF49AC8069B2E7DB7ED8CBA68142A49F9825D1654;
IL2CPP_EXTERN_C String_t* _stringLiteralF5DEBBFF480EBEE869F64BA734E5C3782389C6E6;
IL2CPP_EXTERN_C String_t* _stringLiteralF9AE9A0DB2071161DA6CF5CCFB5C89C13D2097B1;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB02607344E41E7E04C758D3B596362E62C47F5;
IL2CPP_EXTERN_C const RuntimeMethod* XmlDictionaryString__ctor_m9BCF40B7F85CF43A27E4FDEE576EB948F1398B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlExceptionHelper_ThrowXmlException_mE6F1D231B319C90E412A9BF8FFBEC5094CA40370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlUTF8TextReader_Close_m52B586931E63B2B8578793F8D53A5C262AFEC478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlUTF8TextReader_SetInput_m60EE9A1F04BA4855BE0330CB4C06EC995E145596_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t EmptyStringDictionary__ctor_m66A1C47F82A52592444B71AE4526162805933D58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlDictionaryString__cctor_m86B4E5EC62AC9B5B4FA3B1C76C16194B7EDE4243_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlDictionaryString__ctor_m9BCF40B7F85CF43A27E4FDEE576EB948F1398B86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_CreateConversionException_m4F2F1D988D68AC374593B30EEE0EC1F492F87237_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_CreateEncodingException_m74F8C6DBAE7583C535BFE1C5E7D683D70FBA94D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_CreateEncodingException_mC87D19A145C345A626F5294F3A93A524CBFCFD6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_GetName_mC6F8835B7B56E83176F6880FDB7FD1F81BADD175_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_GetWhatWasFound_mEC6A7A3CBE0C86BB4EA488DB43875096327682C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowBase64DataExpected_m1A3A288BBBFDE3A12C606AA09563D80075476DC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowDeclarationNotFirst_mD72489AE6AAAB1F5895C5E53F7B13239271FE69A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowDuplicateAttribute_m182FD4202019EA2BD89445C9D645D9661217ACAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowDuplicateXmlnsAttribute_mC407AC8630B2B959A0694F773B42683FA5F7FBD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowEmptyNamespace_m3E06D5B2923AA099AC0B6E139418D19A40421CE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowEndElementExpected_m2809703CAB4352FA0A7AA447AE44B69C35A3E3E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowInvalidBinaryFormat_mFF528D09DAC94EB7E9EA558F6FD87660F627E9E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowInvalidCharRef_m433A0CF9B462184589B9B701A8144A2F935CD9A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowInvalidRootData_m0572DE2D5BF719BFAABEF604B7D9AC3D731DABAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowInvalidXml_m06A54081D6D97EC5A1A11932866FBF77C95D81DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowMaxArrayLengthExceeded_m001B572413A71129B424E2D9212066B9046FED7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowMaxBytesPerReadExceeded_m07A7EB8649AAE9D1CBEA7029E172A0D242C95203_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowMaxDepthExceeded_m8EE4190671CEF3A992CA54855B4A11C83B5B9059_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowMaxNameTableCharCountExceeded_m17601BD7457CA2732ECF23EE39F350325220387F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowMaxStringContentLengthExceeded_mB50E15627BE43274836C10C8AE8B867798485550_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowMultipleRootElements_mB3BC40AB9A8B97310EB3D7FB3171E2CB2DE33B35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowProcessingInstructionNotSupported_m70855EA2441FB2BA32CF3DAD46F912D91BBD10FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowStartElementExpected_m9A2128FF70834AA19DD1BF1375BF2578D2E583D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowTagMismatch_m84B14036AC27C158CF152BA4AA8BB3F0B32F77C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowTokenExpected_m58AA20C98DF41754931AB76334B48A47C2660099_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowTokenExpected_mA379717CE09073B49DC624B5B2474EAF7AAAB4A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowUndefinedPrefix_m366C7F324E51F4E143CC1F99FE78093266C88F05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowUnexpectedEndElement_mC63F917340784B3782D1948207E64E6B73110189_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowUnexpectedEndOfFile_m1CAE4E6E0986DD3F786B85A90BEF85E609FDBF5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowXmlDictionaryStringIDOutOfRange_mBB18DA067380492A55F708967455FE0F59F38E0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowXmlDictionaryStringIDUndefinedSession_m5F775B861B665594DD0A8176A705E8B7034241BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowXmlDictionaryStringIDUndefinedStatic_mE4DE182A8382D47EA11ED529E6E4B905701E4966_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlExceptionHelper_ThrowXmlException_mE6F1D231B319C90E412A9BF8FFBEC5094CA40370_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteBase64Text_m6DC54A879B8A2AF3CC6825F4ECFCD455EA7887F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteDateTimeText_m39FB33EDF74F6C7F9F7A9CA7F85F7A109EC229B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteDecimalText_m939E0B3149D310A83E55E8B30C8F6EF6275428F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteDoubleText_m0AA1139A9CCC4AA820CC254D2377CD1825440560_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteFloatText_m9597D78695BBA13458AE31F511490A6297F9A677_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteGuidText_m9EBE08E8631511B6563CF51A571F0E39B5A9C481_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteInt32Text_mC049C667BE05BE087EE96ACB52298832C75D9AF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteInt64Text_mF44C1227890B2B5AAFF87E17AF5F6CB9F5C6496C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteTimeSpanText_mF103384C6B24824A7EAA0D36C5E4496174571BEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteUInt64Text_m82E948E2B9ECD7ECC20FDFCA13507AFEF41D190D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlSigningNodeWriter_WriteUniqueIdText_mDD2519D6018760437B410F6BC8D6C5290B93C251_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlStreamNodeWriter__cctor_m818BB82B19CC9AA71546D6FD3812201E7DB61E8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_GetCharBuffer_m90CA523ACA602D577B1951E302948813D59A53F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_GetCharEntityBuffer_mC86D9AE1D2E03B9C0F8B8CB8250A58EB7C5EC92A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_InternalWriteBase64Text_mB8AADFB26D6E521E83C53144BF69496B185356D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_ToBase16_m3BB4B78DA0E3C160A705A4C0FB1814B25FFE6468_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_WriteDateTimeText_m3FFEC3685682F903401F3C0AC46EABD31B916230_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_WriteDecimalText_mC21DF458A4C4E236CC9D5DCEFAED39B76D24346A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_WriteDeclaration_mEE442E5A27C64F915F7D6E9DA57D6F27E61991BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_WriteDoubleText_m91DDB99AAD2BC8E43C1E5C13838AAE89CB1E45FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_WriteFloatText_mCEF8F9563FE701FC5384845A7F931C9A9473FD1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_WriteInt32Text_m079C1CB89FF09378652CAF3FB6ED8027677E1AE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_WriteInt64Text_m93682F519D633DBBAD81E23093FC7AD18A1D0E2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_WriteTimeSpanText_m5CFC3CE0753B2CFCF055AD8CF30BD3D6F84C2F9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter_WriteUInt64Text_m9AB703E6B787CEC52221B3B091ECB400E69F5D61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8NodeWriter__cctor_mC9246FE4D114AD65B14286E85292A18A4280278F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_Close_m52B586931E63B2B8578793F8D53A5C262AFEC478_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadAttributeText_m1DB2D2F9934FC782E92F019A60C0FA6E95CB634E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadAttributes_mB36A035762B54FB2299D7D8F96A8F2A7A5AB0489_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadCData_m0E556A79ABBD08477229BC620F97E7A593678D9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadComment_m73271FCC6C5C690D08A98A386588FFB327DE6B1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadDeclaration_m29F7BF6CF24F8A868E1051D761954AE3DF49D0DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadEndElement_mA1FB87F033F0D0AA2DD7A0BCED94486CA59D9DDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadEscapedText_m3A69CCA8C83C78AF4C318285B7BD3AA5876DB56D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadNonFFFE_m8ACBBF0DE024B7CFB4CFD6ED72DE1CFCA1DAFC45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadQualifiedName_mAD168604D705E1A35EC24B6DDEA5C7B7523A739B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadStartElement_m49BFEE7E3B734207678ADC44FEFF5BB16426A855_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadTextAndWatchForInvalidCharacters_mB2B789022E7B9393EC347A3D232D1343D9EA6996_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadText_m4394883B9766C51A292C40F19C7E84575DCD2AAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_ReadWhitespace_m1FE2584E656A5424C9AAADA8562CEDCE8A38D7D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_Read_mAEEFE461D13C5D5875C2C2EA7B5139A975E58C13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_SetInput_m60EE9A1F04BA4855BE0330CB4C06EC995E145596_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_SkipWhitespace_m06EE0DC2495B4BDBEC80B2AC96690512FF4B96C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader_VerifyNCName_m0B7F7B052979DC5C25D2F26D47CF353CC727D28B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader__cctor_m5451423C196C9BDA69FA3CB5A6D297F007E9B39B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlUTF8TextReader__ctor_m32110B5DF83B08E99CCD1881CFC2C232BDB5936A_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_56)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_59)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_60)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Xml.UniqueId
struct  UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A  : public RuntimeObject
{
public:
	// System.Int64 System.Xml.UniqueId::idLow
	int64_t ___idLow_0;
	// System.Int64 System.Xml.UniqueId::idHigh
	int64_t ___idHigh_1;
	// System.String System.Xml.UniqueId::s
	String_t* ___s_2;

public:
	inline static int32_t get_offset_of_idLow_0() { return static_cast<int32_t>(offsetof(UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A, ___idLow_0)); }
	inline int64_t get_idLow_0() const { return ___idLow_0; }
	inline int64_t* get_address_of_idLow_0() { return &___idLow_0; }
	inline void set_idLow_0(int64_t value)
	{
		___idLow_0 = value;
	}

	inline static int32_t get_offset_of_idHigh_1() { return static_cast<int32_t>(offsetof(UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A, ___idHigh_1)); }
	inline int64_t get_idHigh_1() const { return ___idHigh_1; }
	inline int64_t* get_address_of_idHigh_1() { return &___idHigh_1; }
	inline void set_idHigh_1(int64_t value)
	{
		___idHigh_1 = value;
	}

	inline static int32_t get_offset_of_s_2() { return static_cast<int32_t>(offsetof(UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A, ___s_2)); }
	inline String_t* get_s_2() const { return ___s_2; }
	inline String_t** get_address_of_s_2() { return &___s_2; }
	inline void set_s_2(String_t* value)
	{
		___s_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_2), (void*)value);
	}
};

struct UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A_StaticFields
{
public:
	// System.Int16[] System.Xml.UniqueId::char2val
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___char2val_3;

public:
	inline static int32_t get_offset_of_char2val_3() { return static_cast<int32_t>(offsetof(UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A_StaticFields, ___char2val_3)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_char2val_3() const { return ___char2val_3; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_char2val_3() { return &___char2val_3; }
	inline void set_char2val_3(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___char2val_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___char2val_3), (void*)value);
	}
};


// System.Xml.XmlBaseReader_Namespace
struct  Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71  : public RuntimeObject
{
public:
	// System.Xml.PrefixHandle System.Xml.XmlBaseReader_Namespace::prefix
	PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * ___prefix_0;
	// System.Xml.StringHandle System.Xml.XmlBaseReader_Namespace::uri
	StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * ___uri_1;
	// System.Int32 System.Xml.XmlBaseReader_Namespace::depth
	int32_t ___depth_2;
	// System.Xml.XmlBaseReader_Namespace System.Xml.XmlBaseReader_Namespace::outerUri
	Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * ___outerUri_3;
	// System.String System.Xml.XmlBaseReader_Namespace::uriString
	String_t* ___uriString_4;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71, ___prefix_0)); }
	inline PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * get_prefix_0() const { return ___prefix_0; }
	inline PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 ** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_0), (void*)value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71, ___uri_1)); }
	inline StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * get_uri_1() const { return ___uri_1; }
	inline StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE ** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_1), (void*)value);
	}

	inline static int32_t get_offset_of_depth_2() { return static_cast<int32_t>(offsetof(Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71, ___depth_2)); }
	inline int32_t get_depth_2() const { return ___depth_2; }
	inline int32_t* get_address_of_depth_2() { return &___depth_2; }
	inline void set_depth_2(int32_t value)
	{
		___depth_2 = value;
	}

	inline static int32_t get_offset_of_outerUri_3() { return static_cast<int32_t>(offsetof(Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71, ___outerUri_3)); }
	inline Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * get_outerUri_3() const { return ___outerUri_3; }
	inline Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 ** get_address_of_outerUri_3() { return &___outerUri_3; }
	inline void set_outerUri_3(Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * value)
	{
		___outerUri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outerUri_3), (void*)value);
	}

	inline static int32_t get_offset_of_uriString_4() { return static_cast<int32_t>(offsetof(Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71, ___uriString_4)); }
	inline String_t* get_uriString_4() const { return ___uriString_4; }
	inline String_t** get_address_of_uriString_4() { return &___uriString_4; }
	inline void set_uriString_4(String_t* value)
	{
		___uriString_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uriString_4), (void*)value);
	}
};


// System.Xml.XmlBinaryReaderSession
struct  XmlBinaryReaderSession_t8DAB759A1EC252C96B05AE26AAC29C85358C4D60  : public RuntimeObject
{
public:
	// System.Xml.XmlDictionaryString[] System.Xml.XmlBinaryReaderSession::strings
	XmlDictionaryStringU5BU5D_t45938CD13E08066DFA4A011F061662E026E853D0* ___strings_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Xml.XmlDictionaryString> System.Xml.XmlBinaryReaderSession::stringDict
	Dictionary_2_tA961D1A0C9E3B8629AE6FFDD6ADDDFDBCBDD92ED * ___stringDict_1;

public:
	inline static int32_t get_offset_of_strings_0() { return static_cast<int32_t>(offsetof(XmlBinaryReaderSession_t8DAB759A1EC252C96B05AE26AAC29C85358C4D60, ___strings_0)); }
	inline XmlDictionaryStringU5BU5D_t45938CD13E08066DFA4A011F061662E026E853D0* get_strings_0() const { return ___strings_0; }
	inline XmlDictionaryStringU5BU5D_t45938CD13E08066DFA4A011F061662E026E853D0** get_address_of_strings_0() { return &___strings_0; }
	inline void set_strings_0(XmlDictionaryStringU5BU5D_t45938CD13E08066DFA4A011F061662E026E853D0* value)
	{
		___strings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strings_0), (void*)value);
	}

	inline static int32_t get_offset_of_stringDict_1() { return static_cast<int32_t>(offsetof(XmlBinaryReaderSession_t8DAB759A1EC252C96B05AE26AAC29C85358C4D60, ___stringDict_1)); }
	inline Dictionary_2_tA961D1A0C9E3B8629AE6FFDD6ADDDFDBCBDD92ED * get_stringDict_1() const { return ___stringDict_1; }
	inline Dictionary_2_tA961D1A0C9E3B8629AE6FFDD6ADDDFDBCBDD92ED ** get_address_of_stringDict_1() { return &___stringDict_1; }
	inline void set_stringDict_1(Dictionary_2_tA961D1A0C9E3B8629AE6FFDD6ADDDFDBCBDD92ED * value)
	{
		___stringDict_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDict_1), (void*)value);
	}
};


// System.Xml.XmlBufferReader
struct  XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A  : public RuntimeObject
{
public:
	// System.Xml.XmlDictionaryReader System.Xml.XmlBufferReader::reader
	XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader_0;
	// System.IO.Stream System.Xml.XmlBufferReader::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_1;
	// System.Byte[] System.Xml.XmlBufferReader::streamBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___streamBuffer_2;
	// System.Byte[] System.Xml.XmlBufferReader::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_3;
	// System.Int32 System.Xml.XmlBufferReader::offsetMin
	int32_t ___offsetMin_4;
	// System.Int32 System.Xml.XmlBufferReader::offsetMax
	int32_t ___offsetMax_5;
	// System.Xml.IXmlDictionary System.Xml.XmlBufferReader::dictionary
	RuntimeObject* ___dictionary_6;
	// System.Xml.XmlBinaryReaderSession System.Xml.XmlBufferReader::session
	XmlBinaryReaderSession_t8DAB759A1EC252C96B05AE26AAC29C85358C4D60 * ___session_7;
	// System.Byte[] System.Xml.XmlBufferReader::guid
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___guid_8;
	// System.Int32 System.Xml.XmlBufferReader::offset
	int32_t ___offset_9;
	// System.Char[] System.Xml.XmlBufferReader::chars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars_10;
	// System.Int32 System.Xml.XmlBufferReader::windowOffset
	int32_t ___windowOffset_11;
	// System.Int32 System.Xml.XmlBufferReader::windowOffsetMax
	int32_t ___windowOffsetMax_12;
	// System.Xml.ValueHandle System.Xml.XmlBufferReader::listValue
	ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * ___listValue_13;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___reader_0)); }
	inline XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * get_reader_0() const { return ___reader_0; }
	inline XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___stream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_1() const { return ___stream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_streamBuffer_2() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___streamBuffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_streamBuffer_2() const { return ___streamBuffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_streamBuffer_2() { return &___streamBuffer_2; }
	inline void set_streamBuffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___streamBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___streamBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___buffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_offsetMin_4() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___offsetMin_4)); }
	inline int32_t get_offsetMin_4() const { return ___offsetMin_4; }
	inline int32_t* get_address_of_offsetMin_4() { return &___offsetMin_4; }
	inline void set_offsetMin_4(int32_t value)
	{
		___offsetMin_4 = value;
	}

	inline static int32_t get_offset_of_offsetMax_5() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___offsetMax_5)); }
	inline int32_t get_offsetMax_5() const { return ___offsetMax_5; }
	inline int32_t* get_address_of_offsetMax_5() { return &___offsetMax_5; }
	inline void set_offsetMax_5(int32_t value)
	{
		___offsetMax_5 = value;
	}

	inline static int32_t get_offset_of_dictionary_6() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___dictionary_6)); }
	inline RuntimeObject* get_dictionary_6() const { return ___dictionary_6; }
	inline RuntimeObject** get_address_of_dictionary_6() { return &___dictionary_6; }
	inline void set_dictionary_6(RuntimeObject* value)
	{
		___dictionary_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_6), (void*)value);
	}

	inline static int32_t get_offset_of_session_7() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___session_7)); }
	inline XmlBinaryReaderSession_t8DAB759A1EC252C96B05AE26AAC29C85358C4D60 * get_session_7() const { return ___session_7; }
	inline XmlBinaryReaderSession_t8DAB759A1EC252C96B05AE26AAC29C85358C4D60 ** get_address_of_session_7() { return &___session_7; }
	inline void set_session_7(XmlBinaryReaderSession_t8DAB759A1EC252C96B05AE26AAC29C85358C4D60 * value)
	{
		___session_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___session_7), (void*)value);
	}

	inline static int32_t get_offset_of_guid_8() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___guid_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_guid_8() const { return ___guid_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_guid_8() { return &___guid_8; }
	inline void set_guid_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___guid_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___guid_8), (void*)value);
	}

	inline static int32_t get_offset_of_offset_9() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___offset_9)); }
	inline int32_t get_offset_9() const { return ___offset_9; }
	inline int32_t* get_address_of_offset_9() { return &___offset_9; }
	inline void set_offset_9(int32_t value)
	{
		___offset_9 = value;
	}

	inline static int32_t get_offset_of_chars_10() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___chars_10)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_chars_10() const { return ___chars_10; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_chars_10() { return &___chars_10; }
	inline void set_chars_10(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___chars_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chars_10), (void*)value);
	}

	inline static int32_t get_offset_of_windowOffset_11() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___windowOffset_11)); }
	inline int32_t get_windowOffset_11() const { return ___windowOffset_11; }
	inline int32_t* get_address_of_windowOffset_11() { return &___windowOffset_11; }
	inline void set_windowOffset_11(int32_t value)
	{
		___windowOffset_11 = value;
	}

	inline static int32_t get_offset_of_windowOffsetMax_12() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___windowOffsetMax_12)); }
	inline int32_t get_windowOffsetMax_12() const { return ___windowOffsetMax_12; }
	inline int32_t* get_address_of_windowOffsetMax_12() { return &___windowOffsetMax_12; }
	inline void set_windowOffsetMax_12(int32_t value)
	{
		___windowOffsetMax_12 = value;
	}

	inline static int32_t get_offset_of_listValue_13() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A, ___listValue_13)); }
	inline ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * get_listValue_13() const { return ___listValue_13; }
	inline ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 ** get_address_of_listValue_13() { return &___listValue_13; }
	inline void set_listValue_13(ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * value)
	{
		___listValue_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listValue_13), (void*)value);
	}
};

struct XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A_StaticFields
{
public:
	// System.Byte[] System.Xml.XmlBufferReader::emptyByteArray
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___emptyByteArray_14;
	// System.Xml.XmlBufferReader System.Xml.XmlBufferReader::empty
	XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * ___empty_15;

public:
	inline static int32_t get_offset_of_emptyByteArray_14() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A_StaticFields, ___emptyByteArray_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_emptyByteArray_14() const { return ___emptyByteArray_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_emptyByteArray_14() { return &___emptyByteArray_14; }
	inline void set_emptyByteArray_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___emptyByteArray_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyByteArray_14), (void*)value);
	}

	inline static int32_t get_offset_of_empty_15() { return static_cast<int32_t>(offsetof(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A_StaticFields, ___empty_15)); }
	inline XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * get_empty_15() const { return ___empty_15; }
	inline XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A ** get_address_of_empty_15() { return &___empty_15; }
	inline void set_empty_15(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * value)
	{
		___empty_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_15), (void*)value);
	}
};


// System.Xml.XmlDictionaryString
struct  XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20  : public RuntimeObject
{
public:
	// System.Xml.IXmlDictionary System.Xml.XmlDictionaryString::dictionary
	RuntimeObject* ___dictionary_0;
	// System.String System.Xml.XmlDictionaryString::value
	String_t* ___value_1;
	// System.Int32 System.Xml.XmlDictionaryString::key
	int32_t ___key_2;
	// System.Byte[] System.Xml.XmlDictionaryString::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20, ___dictionary_0)); }
	inline RuntimeObject* get_dictionary_0() const { return ___dictionary_0; }
	inline RuntimeObject** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(RuntimeObject* value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20, ___key_2)); }
	inline int32_t get_key_2() const { return ___key_2; }
	inline int32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20, ___buffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_3), (void*)value);
	}
};

struct XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20_StaticFields
{
public:
	// System.Xml.XmlDictionaryString_EmptyStringDictionary System.Xml.XmlDictionaryString::emptyStringDictionary
	EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C * ___emptyStringDictionary_4;

public:
	inline static int32_t get_offset_of_emptyStringDictionary_4() { return static_cast<int32_t>(offsetof(XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20_StaticFields, ___emptyStringDictionary_4)); }
	inline EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C * get_emptyStringDictionary_4() const { return ___emptyStringDictionary_4; }
	inline EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C ** get_address_of_emptyStringDictionary_4() { return &___emptyStringDictionary_4; }
	inline void set_emptyStringDictionary_4(EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C * value)
	{
		___emptyStringDictionary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyStringDictionary_4), (void*)value);
	}
};


// System.Xml.XmlDictionaryString_EmptyStringDictionary
struct  EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C  : public RuntimeObject
{
public:
	// System.Xml.XmlDictionaryString System.Xml.XmlDictionaryString_EmptyStringDictionary::empty
	XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C, ___empty_0)); }
	inline XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * get_empty_0() const { return ___empty_0; }
	inline XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_0), (void*)value);
	}
};


// System.Xml.XmlExceptionHelper
struct  XmlExceptionHelper_tAC5DB2DCEC3D465F50B97900FFA77C1743A81B07  : public RuntimeObject
{
public:

public:
};


// System.Xml.XmlNodeWriter
struct  XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5  : public RuntimeObject
{
public:

public:
};


// System.Xml.XmlReader
struct  XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB  : public RuntimeObject
{
public:

public:
};

struct XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields
{
public:
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;

public:
	inline static int32_t get_offset_of_IsTextualNodeBitmap_0() { return static_cast<int32_t>(offsetof(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields, ___IsTextualNodeBitmap_0)); }
	inline uint32_t get_IsTextualNodeBitmap_0() const { return ___IsTextualNodeBitmap_0; }
	inline uint32_t* get_address_of_IsTextualNodeBitmap_0() { return &___IsTextualNodeBitmap_0; }
	inline void set_IsTextualNodeBitmap_0(uint32_t value)
	{
		___IsTextualNodeBitmap_0 = value;
	}

	inline static int32_t get_offset_of_CanReadContentAsBitmap_1() { return static_cast<int32_t>(offsetof(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields, ___CanReadContentAsBitmap_1)); }
	inline uint32_t get_CanReadContentAsBitmap_1() const { return ___CanReadContentAsBitmap_1; }
	inline uint32_t* get_address_of_CanReadContentAsBitmap_1() { return &___CanReadContentAsBitmap_1; }
	inline void set_CanReadContentAsBitmap_1(uint32_t value)
	{
		___CanReadContentAsBitmap_1 = value;
	}

	inline static int32_t get_offset_of_HasValueBitmap_2() { return static_cast<int32_t>(offsetof(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields, ___HasValueBitmap_2)); }
	inline uint32_t get_HasValueBitmap_2() const { return ___HasValueBitmap_2; }
	inline uint32_t* get_address_of_HasValueBitmap_2() { return &___HasValueBitmap_2; }
	inline void set_HasValueBitmap_2(uint32_t value)
	{
		___HasValueBitmap_2 = value;
	}
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D128
struct  __StaticArrayInitTypeSizeU3D128_tB086B6358E3C61CA4848F3D96ED144342441D2CF 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tB086B6358E3C61CA4848F3D96ED144342441D2CF__padding[128];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D16
struct  __StaticArrayInitTypeSizeU3D16_tE1FD2CDF98A5B7860A1A49F8CBF544AC53EAE46B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tE1FD2CDF98A5B7860A1A49F8CBF544AC53EAE46B__padding[16];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D256
struct  __StaticArrayInitTypeSizeU3D256_t352462ACCF23E856092D78B5CD88BD1E7E1C9A2B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t352462ACCF23E856092D78B5CD88BD1E7E1C9A2B__padding[256];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D26
struct  __StaticArrayInitTypeSizeU3D26_t3D2A57A8963132CB308FD789D54AFEE0E0ABF7A5 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D26_t3D2A57A8963132CB308FD789D54AFEE0E0ABF7A5__padding[26];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D3
struct  __StaticArrayInitTypeSizeU3D3_t41F41447908BBAF6DD828F61339D659BE3382847 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t41F41447908BBAF6DD828F61339D659BE3382847__padding[3];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D30
struct  __StaticArrayInitTypeSizeU3D30_tC200FB9FD65EE7672D052D5DE587CB3458174072 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D30_tC200FB9FD65EE7672D052D5DE587CB3458174072__padding[30];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D38
struct  __StaticArrayInitTypeSizeU3D38_t70FDCB48800C97FA856522B8A3D26DD6ECEDDCCE 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t70FDCB48800C97FA856522B8A3D26DD6ECEDDCCE__padding[38];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D39
struct  __StaticArrayInitTypeSizeU3D39_t7E32AF173EEDFCE3039D4600DDE94BBE74EC492C 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D39_t7E32AF173EEDFCE3039D4600DDE94BBE74EC492C__padding[39];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D5
struct  __StaticArrayInitTypeSizeU3D5_t45B146C67EC3F816DC2D482F3661E0DC25239840 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_t45B146C67EC3F816DC2D482F3661E0DC25239840__padding[5];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512
struct  __StaticArrayInitTypeSizeU3D512_tDFC0D88ECD6D2E966571F396DA79830C87FA9457 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_tDFC0D88ECD6D2E966571F396DA79830C87FA9457__padding[512];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D6
struct  __StaticArrayInitTypeSizeU3D6_t2F8100EB54B6CCABB833E49BC963D769EC008F98 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t2F8100EB54B6CCABB833E49BC963D769EC008F98__padding[6];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D64
struct  __StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03__padding[64];
	};

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Text.Base64Encoding
struct  Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358  : public Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4
{
public:

public:
};

struct Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358_StaticFields
{
public:
	// System.Byte[] System.Text.Base64Encoding::char2val
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___char2val_62;
	// System.String System.Text.Base64Encoding::val2char
	String_t* ___val2char_63;
	// System.Byte[] System.Text.Base64Encoding::val2byte
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___val2byte_64;

public:
	inline static int32_t get_offset_of_char2val_62() { return static_cast<int32_t>(offsetof(Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358_StaticFields, ___char2val_62)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_char2val_62() const { return ___char2val_62; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_char2val_62() { return &___char2val_62; }
	inline void set_char2val_62(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___char2val_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___char2val_62), (void*)value);
	}

	inline static int32_t get_offset_of_val2char_63() { return static_cast<int32_t>(offsetof(Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358_StaticFields, ___val2char_63)); }
	inline String_t* get_val2char_63() const { return ___val2char_63; }
	inline String_t** get_address_of_val2char_63() { return &___val2char_63; }
	inline void set_val2char_63(String_t* value)
	{
		___val2char_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___val2char_63), (void*)value);
	}

	inline static int32_t get_offset_of_val2byte_64() { return static_cast<int32_t>(offsetof(Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358_StaticFields, ___val2byte_64)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_val2byte_64() const { return ___val2byte_64; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_val2byte_64() { return &___val2byte_64; }
	inline void set_val2byte_64(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___val2byte_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___val2byte_64), (void*)value);
	}
};


// System.Text.SurrogateChar
struct  SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507 
{
public:
	// System.Char System.Text.SurrogateChar::lowChar
	Il2CppChar ___lowChar_0;
	// System.Char System.Text.SurrogateChar::highChar
	Il2CppChar ___highChar_1;

public:
	inline static int32_t get_offset_of_lowChar_0() { return static_cast<int32_t>(offsetof(SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507, ___lowChar_0)); }
	inline Il2CppChar get_lowChar_0() const { return ___lowChar_0; }
	inline Il2CppChar* get_address_of_lowChar_0() { return &___lowChar_0; }
	inline void set_lowChar_0(Il2CppChar value)
	{
		___lowChar_0 = value;
	}

	inline static int32_t get_offset_of_highChar_1() { return static_cast<int32_t>(offsetof(SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507, ___highChar_1)); }
	inline Il2CppChar get_highChar_1() const { return ___highChar_1; }
	inline Il2CppChar* get_address_of_highChar_1() { return &___highChar_1; }
	inline void set_highChar_1(Il2CppChar value)
	{
		___highChar_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.SurrogateChar
struct SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507_marshaled_pinvoke
{
	uint8_t ___lowChar_0;
	uint8_t ___highChar_1;
};
// Native definition for COM marshalling of System.Text.SurrogateChar
struct SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507_marshaled_com
{
	uint8_t ___lowChar_0;
	uint8_t ___highChar_1;
};

// System.Text.UTF8Encoding
struct  UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE  : public Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_62;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_63;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_62() { return static_cast<int32_t>(offsetof(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE, ___emitUTF8Identifier_62)); }
	inline bool get_emitUTF8Identifier_62() const { return ___emitUTF8Identifier_62; }
	inline bool* get_address_of_emitUTF8Identifier_62() { return &___emitUTF8Identifier_62; }
	inline void set_emitUTF8Identifier_62(bool value)
	{
		___emitUTF8Identifier_62 = value;
	}

	inline static int32_t get_offset_of_isThrowException_63() { return static_cast<int32_t>(offsetof(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE, ___isThrowException_63)); }
	inline bool get_isThrowException_63() const { return ___isThrowException_63; }
	inline bool* get_address_of_isThrowException_63() { return &___isThrowException_63; }
	inline void set_isThrowException_63(bool value)
	{
		___isThrowException_63 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Xml.XmlCanonicalWriter_Attribute
struct  Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134 
{
public:
	// System.Int32 System.Xml.XmlCanonicalWriter_Attribute::prefixOffset
	int32_t ___prefixOffset_0;
	// System.Int32 System.Xml.XmlCanonicalWriter_Attribute::prefixLength
	int32_t ___prefixLength_1;
	// System.Int32 System.Xml.XmlCanonicalWriter_Attribute::localNameOffset
	int32_t ___localNameOffset_2;
	// System.Int32 System.Xml.XmlCanonicalWriter_Attribute::localNameLength
	int32_t ___localNameLength_3;
	// System.Int32 System.Xml.XmlCanonicalWriter_Attribute::nsOffset
	int32_t ___nsOffset_4;
	// System.Int32 System.Xml.XmlCanonicalWriter_Attribute::nsLength
	int32_t ___nsLength_5;
	// System.Int32 System.Xml.XmlCanonicalWriter_Attribute::offset
	int32_t ___offset_6;
	// System.Int32 System.Xml.XmlCanonicalWriter_Attribute::length
	int32_t ___length_7;

public:
	inline static int32_t get_offset_of_prefixOffset_0() { return static_cast<int32_t>(offsetof(Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134, ___prefixOffset_0)); }
	inline int32_t get_prefixOffset_0() const { return ___prefixOffset_0; }
	inline int32_t* get_address_of_prefixOffset_0() { return &___prefixOffset_0; }
	inline void set_prefixOffset_0(int32_t value)
	{
		___prefixOffset_0 = value;
	}

	inline static int32_t get_offset_of_prefixLength_1() { return static_cast<int32_t>(offsetof(Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134, ___prefixLength_1)); }
	inline int32_t get_prefixLength_1() const { return ___prefixLength_1; }
	inline int32_t* get_address_of_prefixLength_1() { return &___prefixLength_1; }
	inline void set_prefixLength_1(int32_t value)
	{
		___prefixLength_1 = value;
	}

	inline static int32_t get_offset_of_localNameOffset_2() { return static_cast<int32_t>(offsetof(Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134, ___localNameOffset_2)); }
	inline int32_t get_localNameOffset_2() const { return ___localNameOffset_2; }
	inline int32_t* get_address_of_localNameOffset_2() { return &___localNameOffset_2; }
	inline void set_localNameOffset_2(int32_t value)
	{
		___localNameOffset_2 = value;
	}

	inline static int32_t get_offset_of_localNameLength_3() { return static_cast<int32_t>(offsetof(Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134, ___localNameLength_3)); }
	inline int32_t get_localNameLength_3() const { return ___localNameLength_3; }
	inline int32_t* get_address_of_localNameLength_3() { return &___localNameLength_3; }
	inline void set_localNameLength_3(int32_t value)
	{
		___localNameLength_3 = value;
	}

	inline static int32_t get_offset_of_nsOffset_4() { return static_cast<int32_t>(offsetof(Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134, ___nsOffset_4)); }
	inline int32_t get_nsOffset_4() const { return ___nsOffset_4; }
	inline int32_t* get_address_of_nsOffset_4() { return &___nsOffset_4; }
	inline void set_nsOffset_4(int32_t value)
	{
		___nsOffset_4 = value;
	}

	inline static int32_t get_offset_of_nsLength_5() { return static_cast<int32_t>(offsetof(Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134, ___nsLength_5)); }
	inline int32_t get_nsLength_5() const { return ___nsLength_5; }
	inline int32_t* get_address_of_nsLength_5() { return &___nsLength_5; }
	inline void set_nsLength_5(int32_t value)
	{
		___nsLength_5 = value;
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134, ___offset_6)); }
	inline int32_t get_offset_6() const { return ___offset_6; }
	inline int32_t* get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(int32_t value)
	{
		___offset_6 = value;
	}

	inline static int32_t get_offset_of_length_7() { return static_cast<int32_t>(offsetof(Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134, ___length_7)); }
	inline int32_t get_length_7() const { return ___length_7; }
	inline int32_t* get_address_of_length_7() { return &___length_7; }
	inline void set_length_7(int32_t value)
	{
		___length_7 = value;
	}
};


// System.Xml.XmlCanonicalWriter_Element
struct  Element_tBF68781416E89C130232293C5ED500351055BE99 
{
public:
	// System.Int32 System.Xml.XmlCanonicalWriter_Element::prefixOffset
	int32_t ___prefixOffset_0;
	// System.Int32 System.Xml.XmlCanonicalWriter_Element::prefixLength
	int32_t ___prefixLength_1;
	// System.Int32 System.Xml.XmlCanonicalWriter_Element::localNameOffset
	int32_t ___localNameOffset_2;
	// System.Int32 System.Xml.XmlCanonicalWriter_Element::localNameLength
	int32_t ___localNameLength_3;

public:
	inline static int32_t get_offset_of_prefixOffset_0() { return static_cast<int32_t>(offsetof(Element_tBF68781416E89C130232293C5ED500351055BE99, ___prefixOffset_0)); }
	inline int32_t get_prefixOffset_0() const { return ___prefixOffset_0; }
	inline int32_t* get_address_of_prefixOffset_0() { return &___prefixOffset_0; }
	inline void set_prefixOffset_0(int32_t value)
	{
		___prefixOffset_0 = value;
	}

	inline static int32_t get_offset_of_prefixLength_1() { return static_cast<int32_t>(offsetof(Element_tBF68781416E89C130232293C5ED500351055BE99, ___prefixLength_1)); }
	inline int32_t get_prefixLength_1() const { return ___prefixLength_1; }
	inline int32_t* get_address_of_prefixLength_1() { return &___prefixLength_1; }
	inline void set_prefixLength_1(int32_t value)
	{
		___prefixLength_1 = value;
	}

	inline static int32_t get_offset_of_localNameOffset_2() { return static_cast<int32_t>(offsetof(Element_tBF68781416E89C130232293C5ED500351055BE99, ___localNameOffset_2)); }
	inline int32_t get_localNameOffset_2() const { return ___localNameOffset_2; }
	inline int32_t* get_address_of_localNameOffset_2() { return &___localNameOffset_2; }
	inline void set_localNameOffset_2(int32_t value)
	{
		___localNameOffset_2 = value;
	}

	inline static int32_t get_offset_of_localNameLength_3() { return static_cast<int32_t>(offsetof(Element_tBF68781416E89C130232293C5ED500351055BE99, ___localNameLength_3)); }
	inline int32_t get_localNameLength_3() const { return ___localNameLength_3; }
	inline int32_t* get_address_of_localNameLength_3() { return &___localNameLength_3; }
	inline void set_localNameLength_3(int32_t value)
	{
		___localNameLength_3 = value;
	}
};


// System.Xml.XmlDictionaryReader
struct  XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61  : public XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB
{
public:

public:
};


// System.Xml.XmlSigningNodeWriter
struct  XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F  : public XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5
{
public:
	// System.Xml.XmlNodeWriter System.Xml.XmlSigningNodeWriter::writer
	XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * ___writer_0;
	// System.Xml.XmlCanonicalWriter System.Xml.XmlSigningNodeWriter::signingWriter
	XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * ___signingWriter_1;
	// System.Byte[] System.Xml.XmlSigningNodeWriter::chars
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars_2;
	// System.Byte[] System.Xml.XmlSigningNodeWriter::base64Chars
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___base64Chars_3;
	// System.Boolean System.Xml.XmlSigningNodeWriter::text
	bool ___text_4;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F, ___writer_0)); }
	inline XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * get_writer_0() const { return ___writer_0; }
	inline XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_0), (void*)value);
	}

	inline static int32_t get_offset_of_signingWriter_1() { return static_cast<int32_t>(offsetof(XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F, ___signingWriter_1)); }
	inline XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * get_signingWriter_1() const { return ___signingWriter_1; }
	inline XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 ** get_address_of_signingWriter_1() { return &___signingWriter_1; }
	inline void set_signingWriter_1(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * value)
	{
		___signingWriter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signingWriter_1), (void*)value);
	}

	inline static int32_t get_offset_of_chars_2() { return static_cast<int32_t>(offsetof(XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F, ___chars_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_chars_2() const { return ___chars_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_chars_2() { return &___chars_2; }
	inline void set_chars_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___chars_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chars_2), (void*)value);
	}

	inline static int32_t get_offset_of_base64Chars_3() { return static_cast<int32_t>(offsetof(XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F, ___base64Chars_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_base64Chars_3() const { return ___base64Chars_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_base64Chars_3() { return &___base64Chars_3; }
	inline void set_base64Chars_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___base64Chars_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Chars_3), (void*)value);
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F, ___text_4)); }
	inline bool get_text_4() const { return ___text_4; }
	inline bool* get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(bool value)
	{
		___text_4 = value;
	}
};


// System.Xml.XmlStreamNodeWriter
struct  XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29  : public XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5
{
public:
	// System.IO.Stream System.Xml.XmlStreamNodeWriter::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_0;
	// System.Byte[] System.Xml.XmlStreamNodeWriter::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_1;
	// System.Int32 System.Xml.XmlStreamNodeWriter::offset
	int32_t ___offset_2;
	// System.Boolean System.Xml.XmlStreamNodeWriter::ownsStream
	bool ___ownsStream_3;
	// System.Text.Encoding System.Xml.XmlStreamNodeWriter::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_4;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29, ___stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_0() const { return ___stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29, ___buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_ownsStream_3() { return static_cast<int32_t>(offsetof(XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29, ___ownsStream_3)); }
	inline bool get_ownsStream_3() const { return ___ownsStream_3; }
	inline bool* get_address_of_ownsStream_3() { return &___ownsStream_3; }
	inline void set_ownsStream_3(bool value)
	{
		___ownsStream_3 = value;
	}

	inline static int32_t get_offset_of_encoding_4() { return static_cast<int32_t>(offsetof(XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29, ___encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_4() const { return ___encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_4() { return &___encoding_4; }
	inline void set_encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_4), (void*)value);
	}
};

struct XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29_StaticFields
{
public:
	// System.Text.UTF8Encoding System.Xml.XmlStreamNodeWriter::UTF8Encoding
	UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * ___UTF8Encoding_5;

public:
	inline static int32_t get_offset_of_UTF8Encoding_5() { return static_cast<int32_t>(offsetof(XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29_StaticFields, ___UTF8Encoding_5)); }
	inline UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * get_UTF8Encoding_5() const { return ___UTF8Encoding_5; }
	inline UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE ** get_address_of_UTF8Encoding_5() { return &___UTF8Encoding_5; }
	inline void set_UTF8Encoding_5(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * value)
	{
		___UTF8Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UTF8Encoding_5), (void*)value);
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D64 <PrivateImplementationDetails>::0953DF544832295E4A5B19928F95C351F25DA86A
	__StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  ___0953DF544832295E4A5B19928F95C351F25DA86A_0;
	// System.Int64 <PrivateImplementationDetails>::14A9DC09E10179B15BEAF94C0AED53904ACE0336
	int64_t ___14A9DC09E10179B15BEAF94C0AED53904ACE0336_1;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D5 <PrivateImplementationDetails>::226CF119B78825F1720CF2CA485C2D85113D68C6
	__StaticArrayInitTypeSizeU3D5_t45B146C67EC3F816DC2D482F3661E0DC25239840  ___226CF119B78825F1720CF2CA485C2D85113D68C6_2;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D30 <PrivateImplementationDetails>::2A819C73D5892FC12A45F8232E1E03B764F9EB84
	__StaticArrayInitTypeSizeU3D30_tC200FB9FD65EE7672D052D5DE587CB3458174072  ___2A819C73D5892FC12A45F8232E1E03B764F9EB84_3;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D26 <PrivateImplementationDetails>::32D10C7B8CF96570CA04CE37F2A19D84240D3A89
	__StaticArrayInitTypeSizeU3D26_t3D2A57A8963132CB308FD789D54AFEE0E0ABF7A5  ___32D10C7B8CF96570CA04CE37F2A19D84240D3A89_4;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D3 <PrivateImplementationDetails>::364A37E6F67B6074B93346D4E369336F4433B1C5
	__StaticArrayInitTypeSizeU3D3_t41F41447908BBAF6DD828F61339D659BE3382847  ___364A37E6F67B6074B93346D4E369336F4433B1C5_5;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D39 <PrivateImplementationDetails>::577C1328D31B8277AC320C63F2A94D9988BFC9C1
	__StaticArrayInitTypeSizeU3D39_t7E32AF173EEDFCE3039D4600DDE94BBE74EC492C  ___577C1328D31B8277AC320C63F2A94D9988BFC9C1_6;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D64 <PrivateImplementationDetails>::71599C20F1747A39DEDFB726ADBFA0E04AA71448
	__StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  ___71599C20F1747A39DEDFB726ADBFA0E04AA71448_7;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D6 <PrivateImplementationDetails>::79103F7D0A100F893D3D18C66F3F8397ED8BFFD9
	__StaticArrayInitTypeSizeU3D6_t2F8100EB54B6CCABB833E49BC963D769EC008F98  ___79103F7D0A100F893D3D18C66F3F8397ED8BFFD9_8;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::9D35D7AE7F9C8159DCA3A47B8D6D155D5B53897C
	__StaticArrayInitTypeSizeU3D512_tDFC0D88ECD6D2E966571F396DA79830C87FA9457  ___9D35D7AE7F9C8159DCA3A47B8D6D155D5B53897C_9;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D256 <PrivateImplementationDetails>::9E8419627B46E6737DEF6B4A11ED2CFF7138723F
	__StaticArrayInitTypeSizeU3D256_t352462ACCF23E856092D78B5CD88BD1E7E1C9A2B  ___9E8419627B46E6737DEF6B4A11ED2CFF7138723F_10;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D128 <PrivateImplementationDetails>::A11F11A5D2F4D7E2E917B8E9B818AE383B384C7D
	__StaticArrayInitTypeSizeU3D128_tB086B6358E3C61CA4848F3D96ED144342441D2CF  ___A11F11A5D2F4D7E2E917B8E9B818AE383B384C7D_11;
	// System.Int64 <PrivateImplementationDetails>::C7332892AD7D1974562844144E505B853270A0A3
	int64_t ___C7332892AD7D1974562844144E505B853270A0A3_12;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D38 <PrivateImplementationDetails>::CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC
	__StaticArrayInitTypeSizeU3D38_t70FDCB48800C97FA856522B8A3D26DD6ECEDDCCE  ___CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D16 <PrivateImplementationDetails>::CE27CB141098FEB00714E758646BE3E99C185B71
	__StaticArrayInitTypeSizeU3D16_tE1FD2CDF98A5B7860A1A49F8CBF544AC53EAE46B  ___CE27CB141098FEB00714E758646BE3E99C185B71_14;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D64 <PrivateImplementationDetails>::DCC1E88AA44895E53932C0DE79C8AF42EB190A95
	__StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  ___DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15;
	// System.Int64 <PrivateImplementationDetails>::E767C9DC651168B3700C26F778E2004D2764ADD4
	int64_t ___E767C9DC651168B3700C26F778E2004D2764ADD4_16;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D64 <PrivateImplementationDetails>::E7B33C1F49B2907914D67770D8F998E0EFBF2532
	__StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  ___E7B33C1F49B2907914D67770D8F998E0EFBF2532_17;
	// System.Int64 <PrivateImplementationDetails>::EBC658B067B5C785A3F0BB67D73755F6FEE7F70C
	int64_t ___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_18;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D128 <PrivateImplementationDetails>::FA892ED77B87DDCFE5D25380151613AACA162A99
	__StaticArrayInitTypeSizeU3D128_tB086B6358E3C61CA4848F3D96ED144342441D2CF  ___FA892ED77B87DDCFE5D25380151613AACA162A99_19;

public:
	inline static int32_t get_offset_of_U30953DF544832295E4A5B19928F95C351F25DA86A_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___0953DF544832295E4A5B19928F95C351F25DA86A_0)); }
	inline __StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  get_U30953DF544832295E4A5B19928F95C351F25DA86A_0() const { return ___0953DF544832295E4A5B19928F95C351F25DA86A_0; }
	inline __StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03 * get_address_of_U30953DF544832295E4A5B19928F95C351F25DA86A_0() { return &___0953DF544832295E4A5B19928F95C351F25DA86A_0; }
	inline void set_U30953DF544832295E4A5B19928F95C351F25DA86A_0(__StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  value)
	{
		___0953DF544832295E4A5B19928F95C351F25DA86A_0 = value;
	}

	inline static int32_t get_offset_of_U314A9DC09E10179B15BEAF94C0AED53904ACE0336_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___14A9DC09E10179B15BEAF94C0AED53904ACE0336_1)); }
	inline int64_t get_U314A9DC09E10179B15BEAF94C0AED53904ACE0336_1() const { return ___14A9DC09E10179B15BEAF94C0AED53904ACE0336_1; }
	inline int64_t* get_address_of_U314A9DC09E10179B15BEAF94C0AED53904ACE0336_1() { return &___14A9DC09E10179B15BEAF94C0AED53904ACE0336_1; }
	inline void set_U314A9DC09E10179B15BEAF94C0AED53904ACE0336_1(int64_t value)
	{
		___14A9DC09E10179B15BEAF94C0AED53904ACE0336_1 = value;
	}

	inline static int32_t get_offset_of_U3226CF119B78825F1720CF2CA485C2D85113D68C6_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___226CF119B78825F1720CF2CA485C2D85113D68C6_2)); }
	inline __StaticArrayInitTypeSizeU3D5_t45B146C67EC3F816DC2D482F3661E0DC25239840  get_U3226CF119B78825F1720CF2CA485C2D85113D68C6_2() const { return ___226CF119B78825F1720CF2CA485C2D85113D68C6_2; }
	inline __StaticArrayInitTypeSizeU3D5_t45B146C67EC3F816DC2D482F3661E0DC25239840 * get_address_of_U3226CF119B78825F1720CF2CA485C2D85113D68C6_2() { return &___226CF119B78825F1720CF2CA485C2D85113D68C6_2; }
	inline void set_U3226CF119B78825F1720CF2CA485C2D85113D68C6_2(__StaticArrayInitTypeSizeU3D5_t45B146C67EC3F816DC2D482F3661E0DC25239840  value)
	{
		___226CF119B78825F1720CF2CA485C2D85113D68C6_2 = value;
	}

	inline static int32_t get_offset_of_U32A819C73D5892FC12A45F8232E1E03B764F9EB84_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___2A819C73D5892FC12A45F8232E1E03B764F9EB84_3)); }
	inline __StaticArrayInitTypeSizeU3D30_tC200FB9FD65EE7672D052D5DE587CB3458174072  get_U32A819C73D5892FC12A45F8232E1E03B764F9EB84_3() const { return ___2A819C73D5892FC12A45F8232E1E03B764F9EB84_3; }
	inline __StaticArrayInitTypeSizeU3D30_tC200FB9FD65EE7672D052D5DE587CB3458174072 * get_address_of_U32A819C73D5892FC12A45F8232E1E03B764F9EB84_3() { return &___2A819C73D5892FC12A45F8232E1E03B764F9EB84_3; }
	inline void set_U32A819C73D5892FC12A45F8232E1E03B764F9EB84_3(__StaticArrayInitTypeSizeU3D30_tC200FB9FD65EE7672D052D5DE587CB3458174072  value)
	{
		___2A819C73D5892FC12A45F8232E1E03B764F9EB84_3 = value;
	}

	inline static int32_t get_offset_of_U332D10C7B8CF96570CA04CE37F2A19D84240D3A89_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___32D10C7B8CF96570CA04CE37F2A19D84240D3A89_4)); }
	inline __StaticArrayInitTypeSizeU3D26_t3D2A57A8963132CB308FD789D54AFEE0E0ABF7A5  get_U332D10C7B8CF96570CA04CE37F2A19D84240D3A89_4() const { return ___32D10C7B8CF96570CA04CE37F2A19D84240D3A89_4; }
	inline __StaticArrayInitTypeSizeU3D26_t3D2A57A8963132CB308FD789D54AFEE0E0ABF7A5 * get_address_of_U332D10C7B8CF96570CA04CE37F2A19D84240D3A89_4() { return &___32D10C7B8CF96570CA04CE37F2A19D84240D3A89_4; }
	inline void set_U332D10C7B8CF96570CA04CE37F2A19D84240D3A89_4(__StaticArrayInitTypeSizeU3D26_t3D2A57A8963132CB308FD789D54AFEE0E0ABF7A5  value)
	{
		___32D10C7B8CF96570CA04CE37F2A19D84240D3A89_4 = value;
	}

	inline static int32_t get_offset_of_U3364A37E6F67B6074B93346D4E369336F4433B1C5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___364A37E6F67B6074B93346D4E369336F4433B1C5_5)); }
	inline __StaticArrayInitTypeSizeU3D3_t41F41447908BBAF6DD828F61339D659BE3382847  get_U3364A37E6F67B6074B93346D4E369336F4433B1C5_5() const { return ___364A37E6F67B6074B93346D4E369336F4433B1C5_5; }
	inline __StaticArrayInitTypeSizeU3D3_t41F41447908BBAF6DD828F61339D659BE3382847 * get_address_of_U3364A37E6F67B6074B93346D4E369336F4433B1C5_5() { return &___364A37E6F67B6074B93346D4E369336F4433B1C5_5; }
	inline void set_U3364A37E6F67B6074B93346D4E369336F4433B1C5_5(__StaticArrayInitTypeSizeU3D3_t41F41447908BBAF6DD828F61339D659BE3382847  value)
	{
		___364A37E6F67B6074B93346D4E369336F4433B1C5_5 = value;
	}

	inline static int32_t get_offset_of_U3577C1328D31B8277AC320C63F2A94D9988BFC9C1_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___577C1328D31B8277AC320C63F2A94D9988BFC9C1_6)); }
	inline __StaticArrayInitTypeSizeU3D39_t7E32AF173EEDFCE3039D4600DDE94BBE74EC492C  get_U3577C1328D31B8277AC320C63F2A94D9988BFC9C1_6() const { return ___577C1328D31B8277AC320C63F2A94D9988BFC9C1_6; }
	inline __StaticArrayInitTypeSizeU3D39_t7E32AF173EEDFCE3039D4600DDE94BBE74EC492C * get_address_of_U3577C1328D31B8277AC320C63F2A94D9988BFC9C1_6() { return &___577C1328D31B8277AC320C63F2A94D9988BFC9C1_6; }
	inline void set_U3577C1328D31B8277AC320C63F2A94D9988BFC9C1_6(__StaticArrayInitTypeSizeU3D39_t7E32AF173EEDFCE3039D4600DDE94BBE74EC492C  value)
	{
		___577C1328D31B8277AC320C63F2A94D9988BFC9C1_6 = value;
	}

	inline static int32_t get_offset_of_U371599C20F1747A39DEDFB726ADBFA0E04AA71448_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___71599C20F1747A39DEDFB726ADBFA0E04AA71448_7)); }
	inline __StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  get_U371599C20F1747A39DEDFB726ADBFA0E04AA71448_7() const { return ___71599C20F1747A39DEDFB726ADBFA0E04AA71448_7; }
	inline __StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03 * get_address_of_U371599C20F1747A39DEDFB726ADBFA0E04AA71448_7() { return &___71599C20F1747A39DEDFB726ADBFA0E04AA71448_7; }
	inline void set_U371599C20F1747A39DEDFB726ADBFA0E04AA71448_7(__StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  value)
	{
		___71599C20F1747A39DEDFB726ADBFA0E04AA71448_7 = value;
	}

	inline static int32_t get_offset_of_U379103F7D0A100F893D3D18C66F3F8397ED8BFFD9_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___79103F7D0A100F893D3D18C66F3F8397ED8BFFD9_8)); }
	inline __StaticArrayInitTypeSizeU3D6_t2F8100EB54B6CCABB833E49BC963D769EC008F98  get_U379103F7D0A100F893D3D18C66F3F8397ED8BFFD9_8() const { return ___79103F7D0A100F893D3D18C66F3F8397ED8BFFD9_8; }
	inline __StaticArrayInitTypeSizeU3D6_t2F8100EB54B6CCABB833E49BC963D769EC008F98 * get_address_of_U379103F7D0A100F893D3D18C66F3F8397ED8BFFD9_8() { return &___79103F7D0A100F893D3D18C66F3F8397ED8BFFD9_8; }
	inline void set_U379103F7D0A100F893D3D18C66F3F8397ED8BFFD9_8(__StaticArrayInitTypeSizeU3D6_t2F8100EB54B6CCABB833E49BC963D769EC008F98  value)
	{
		___79103F7D0A100F893D3D18C66F3F8397ED8BFFD9_8 = value;
	}

	inline static int32_t get_offset_of_U39D35D7AE7F9C8159DCA3A47B8D6D155D5B53897C_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___9D35D7AE7F9C8159DCA3A47B8D6D155D5B53897C_9)); }
	inline __StaticArrayInitTypeSizeU3D512_tDFC0D88ECD6D2E966571F396DA79830C87FA9457  get_U39D35D7AE7F9C8159DCA3A47B8D6D155D5B53897C_9() const { return ___9D35D7AE7F9C8159DCA3A47B8D6D155D5B53897C_9; }
	inline __StaticArrayInitTypeSizeU3D512_tDFC0D88ECD6D2E966571F396DA79830C87FA9457 * get_address_of_U39D35D7AE7F9C8159DCA3A47B8D6D155D5B53897C_9() { return &___9D35D7AE7F9C8159DCA3A47B8D6D155D5B53897C_9; }
	inline void set_U39D35D7AE7F9C8159DCA3A47B8D6D155D5B53897C_9(__StaticArrayInitTypeSizeU3D512_tDFC0D88ECD6D2E966571F396DA79830C87FA9457  value)
	{
		___9D35D7AE7F9C8159DCA3A47B8D6D155D5B53897C_9 = value;
	}

	inline static int32_t get_offset_of_U39E8419627B46E6737DEF6B4A11ED2CFF7138723F_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___9E8419627B46E6737DEF6B4A11ED2CFF7138723F_10)); }
	inline __StaticArrayInitTypeSizeU3D256_t352462ACCF23E856092D78B5CD88BD1E7E1C9A2B  get_U39E8419627B46E6737DEF6B4A11ED2CFF7138723F_10() const { return ___9E8419627B46E6737DEF6B4A11ED2CFF7138723F_10; }
	inline __StaticArrayInitTypeSizeU3D256_t352462ACCF23E856092D78B5CD88BD1E7E1C9A2B * get_address_of_U39E8419627B46E6737DEF6B4A11ED2CFF7138723F_10() { return &___9E8419627B46E6737DEF6B4A11ED2CFF7138723F_10; }
	inline void set_U39E8419627B46E6737DEF6B4A11ED2CFF7138723F_10(__StaticArrayInitTypeSizeU3D256_t352462ACCF23E856092D78B5CD88BD1E7E1C9A2B  value)
	{
		___9E8419627B46E6737DEF6B4A11ED2CFF7138723F_10 = value;
	}

	inline static int32_t get_offset_of_A11F11A5D2F4D7E2E917B8E9B818AE383B384C7D_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___A11F11A5D2F4D7E2E917B8E9B818AE383B384C7D_11)); }
	inline __StaticArrayInitTypeSizeU3D128_tB086B6358E3C61CA4848F3D96ED144342441D2CF  get_A11F11A5D2F4D7E2E917B8E9B818AE383B384C7D_11() const { return ___A11F11A5D2F4D7E2E917B8E9B818AE383B384C7D_11; }
	inline __StaticArrayInitTypeSizeU3D128_tB086B6358E3C61CA4848F3D96ED144342441D2CF * get_address_of_A11F11A5D2F4D7E2E917B8E9B818AE383B384C7D_11() { return &___A11F11A5D2F4D7E2E917B8E9B818AE383B384C7D_11; }
	inline void set_A11F11A5D2F4D7E2E917B8E9B818AE383B384C7D_11(__StaticArrayInitTypeSizeU3D128_tB086B6358E3C61CA4848F3D96ED144342441D2CF  value)
	{
		___A11F11A5D2F4D7E2E917B8E9B818AE383B384C7D_11 = value;
	}

	inline static int32_t get_offset_of_C7332892AD7D1974562844144E505B853270A0A3_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___C7332892AD7D1974562844144E505B853270A0A3_12)); }
	inline int64_t get_C7332892AD7D1974562844144E505B853270A0A3_12() const { return ___C7332892AD7D1974562844144E505B853270A0A3_12; }
	inline int64_t* get_address_of_C7332892AD7D1974562844144E505B853270A0A3_12() { return &___C7332892AD7D1974562844144E505B853270A0A3_12; }
	inline void set_C7332892AD7D1974562844144E505B853270A0A3_12(int64_t value)
	{
		___C7332892AD7D1974562844144E505B853270A0A3_12 = value;
	}

	inline static int32_t get_offset_of_CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13)); }
	inline __StaticArrayInitTypeSizeU3D38_t70FDCB48800C97FA856522B8A3D26DD6ECEDDCCE  get_CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13() const { return ___CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13; }
	inline __StaticArrayInitTypeSizeU3D38_t70FDCB48800C97FA856522B8A3D26DD6ECEDDCCE * get_address_of_CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13() { return &___CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13; }
	inline void set_CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13(__StaticArrayInitTypeSizeU3D38_t70FDCB48800C97FA856522B8A3D26DD6ECEDDCCE  value)
	{
		___CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13 = value;
	}

	inline static int32_t get_offset_of_CE27CB141098FEB00714E758646BE3E99C185B71_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___CE27CB141098FEB00714E758646BE3E99C185B71_14)); }
	inline __StaticArrayInitTypeSizeU3D16_tE1FD2CDF98A5B7860A1A49F8CBF544AC53EAE46B  get_CE27CB141098FEB00714E758646BE3E99C185B71_14() const { return ___CE27CB141098FEB00714E758646BE3E99C185B71_14; }
	inline __StaticArrayInitTypeSizeU3D16_tE1FD2CDF98A5B7860A1A49F8CBF544AC53EAE46B * get_address_of_CE27CB141098FEB00714E758646BE3E99C185B71_14() { return &___CE27CB141098FEB00714E758646BE3E99C185B71_14; }
	inline void set_CE27CB141098FEB00714E758646BE3E99C185B71_14(__StaticArrayInitTypeSizeU3D16_tE1FD2CDF98A5B7860A1A49F8CBF544AC53EAE46B  value)
	{
		___CE27CB141098FEB00714E758646BE3E99C185B71_14 = value;
	}

	inline static int32_t get_offset_of_DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15)); }
	inline __StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  get_DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15() const { return ___DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15; }
	inline __StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03 * get_address_of_DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15() { return &___DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15; }
	inline void set_DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15(__StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  value)
	{
		___DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15 = value;
	}

	inline static int32_t get_offset_of_E767C9DC651168B3700C26F778E2004D2764ADD4_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___E767C9DC651168B3700C26F778E2004D2764ADD4_16)); }
	inline int64_t get_E767C9DC651168B3700C26F778E2004D2764ADD4_16() const { return ___E767C9DC651168B3700C26F778E2004D2764ADD4_16; }
	inline int64_t* get_address_of_E767C9DC651168B3700C26F778E2004D2764ADD4_16() { return &___E767C9DC651168B3700C26F778E2004D2764ADD4_16; }
	inline void set_E767C9DC651168B3700C26F778E2004D2764ADD4_16(int64_t value)
	{
		___E767C9DC651168B3700C26F778E2004D2764ADD4_16 = value;
	}

	inline static int32_t get_offset_of_E7B33C1F49B2907914D67770D8F998E0EFBF2532_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___E7B33C1F49B2907914D67770D8F998E0EFBF2532_17)); }
	inline __StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  get_E7B33C1F49B2907914D67770D8F998E0EFBF2532_17() const { return ___E7B33C1F49B2907914D67770D8F998E0EFBF2532_17; }
	inline __StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03 * get_address_of_E7B33C1F49B2907914D67770D8F998E0EFBF2532_17() { return &___E7B33C1F49B2907914D67770D8F998E0EFBF2532_17; }
	inline void set_E7B33C1F49B2907914D67770D8F998E0EFBF2532_17(__StaticArrayInitTypeSizeU3D64_t4925835DD327ED4E20B7B7CA16108FE23D079E03  value)
	{
		___E7B33C1F49B2907914D67770D8F998E0EFBF2532_17 = value;
	}

	inline static int32_t get_offset_of_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_18)); }
	inline int64_t get_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_18() const { return ___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_18; }
	inline int64_t* get_address_of_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_18() { return &___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_18; }
	inline void set_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_18(int64_t value)
	{
		___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_18 = value;
	}

	inline static int32_t get_offset_of_FA892ED77B87DDCFE5D25380151613AACA162A99_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797_StaticFields, ___FA892ED77B87DDCFE5D25380151613AACA162A99_19)); }
	inline __StaticArrayInitTypeSizeU3D128_tB086B6358E3C61CA4848F3D96ED144342441D2CF  get_FA892ED77B87DDCFE5D25380151613AACA162A99_19() const { return ___FA892ED77B87DDCFE5D25380151613AACA162A99_19; }
	inline __StaticArrayInitTypeSizeU3D128_tB086B6358E3C61CA4848F3D96ED144342441D2CF * get_address_of_FA892ED77B87DDCFE5D25380151613AACA162A99_19() { return &___FA892ED77B87DDCFE5D25380151613AACA162A99_19; }
	inline void set_FA892ED77B87DDCFE5D25380151613AACA162A99_19(__StaticArrayInitTypeSizeU3D128_tB086B6358E3C61CA4848F3D96ED144342441D2CF  value)
	{
		___FA892ED77B87DDCFE5D25380151613AACA162A99_19 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.Xml.EncodingStreamWrapper_SupportedEncoding
struct  SupportedEncoding_t2E12B60E8FDE6B692C210087736EDCC60DF6916A 
{
public:
	// System.Int32 System.Xml.EncodingStreamWrapper_SupportedEncoding::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedEncoding_t2E12B60E8FDE6B692C210087736EDCC60DF6916A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.PrefixHandleType
struct  PrefixHandleType_tD8F598AAFAE529A21CD53CB6127B9C21B3226A09 
{
public:
	// System.Int32 System.Xml.PrefixHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrefixHandleType_tD8F598AAFAE529A21CD53CB6127B9C21B3226A09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.ReadState
struct  ReadState_tAAF15D8DE96B6A22379D2B6FEF22764640D05DD0 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReadState_tAAF15D8DE96B6A22379D2B6FEF22764640D05DD0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.StringHandle_StringHandleType
struct  StringHandleType_t8B3263ADCF22718CE8147E5088078EE3D518423A 
{
public:
	// System.Int32 System.Xml.StringHandle_StringHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringHandleType_t8B3263ADCF22718CE8147E5088078EE3D518423A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.ValueHandleType
struct  ValueHandleType_tE144BA73166A9AEF6F55FC0166D365116149B2E7 
{
public:
	// System.Int32 System.Xml.ValueHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValueHandleType_tE144BA73166A9AEF6F55FC0166D365116149B2E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlBaseReader
struct  XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269  : public XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61
{
public:
	// System.Xml.XmlBufferReader System.Xml.XmlBaseReader::bufferReader
	XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * ___bufferReader_3;
	// System.Xml.XmlBaseReader_XmlNode System.Xml.XmlBaseReader::node
	XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * ___node_4;
	// System.Xml.XmlBaseReader_NamespaceManager System.Xml.XmlBaseReader::nsMgr
	NamespaceManager_t6E38E1106AB1E20AA43B16CBCADBF923158925AE * ___nsMgr_5;
	// System.Xml.XmlBaseReader_XmlElementNode[] System.Xml.XmlBaseReader::elementNodes
	XmlElementNodeU5BU5D_t780F02363A6F69724F1F01FB37C5310CE65BA89E* ___elementNodes_6;
	// System.Xml.XmlBaseReader_XmlAttributeNode[] System.Xml.XmlBaseReader::attributeNodes
	XmlAttributeNodeU5BU5D_t14A4EF50404F4DEF9FE20B15B0AFE27942DB1D9A* ___attributeNodes_7;
	// System.Xml.XmlBaseReader_XmlAtomicTextNode System.Xml.XmlBaseReader::atomicTextNode
	XmlAtomicTextNode_tDFAE6EC65DE6CD6DB1055BCA114ECADB1FBB851B * ___atomicTextNode_8;
	// System.Int32 System.Xml.XmlBaseReader::depth
	int32_t ___depth_9;
	// System.Int32 System.Xml.XmlBaseReader::attributeCount
	int32_t ___attributeCount_10;
	// System.Int32 System.Xml.XmlBaseReader::attributeStart
	int32_t ___attributeStart_11;
	// System.Xml.XmlDictionaryReaderQuotas System.Xml.XmlBaseReader::quotas
	XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * ___quotas_12;
	// System.Xml.XmlNameTable System.Xml.XmlBaseReader::nameTable
	XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * ___nameTable_13;
	// System.Xml.XmlBaseReader_XmlDeclarationNode System.Xml.XmlBaseReader::declarationNode
	XmlDeclarationNode_tF18E8BF011A44F0380942A5F3D8B600DA82CF3E5 * ___declarationNode_14;
	// System.Xml.XmlBaseReader_XmlComplexTextNode System.Xml.XmlBaseReader::complexTextNode
	XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C * ___complexTextNode_15;
	// System.Xml.XmlBaseReader_XmlWhitespaceTextNode System.Xml.XmlBaseReader::whitespaceTextNode
	XmlWhitespaceTextNode_tC982762FC475960453E77E05C137B70CF0A78F51 * ___whitespaceTextNode_16;
	// System.Xml.XmlBaseReader_XmlCDataNode System.Xml.XmlBaseReader::cdataNode
	XmlCDataNode_t466D5083F8B29DAD8C615C555412026D474EABF4 * ___cdataNode_17;
	// System.Xml.XmlBaseReader_XmlCommentNode System.Xml.XmlBaseReader::commentNode
	XmlCommentNode_tC7CA5ECB98EC8FCC1AAA805B64B16642892AA2E6 * ___commentNode_18;
	// System.Xml.XmlBaseReader_XmlElementNode System.Xml.XmlBaseReader::rootElementNode
	XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * ___rootElementNode_19;
	// System.Int32 System.Xml.XmlBaseReader::attributeIndex
	int32_t ___attributeIndex_20;
	// System.Char[] System.Xml.XmlBaseReader::chars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars_21;
	// System.String System.Xml.XmlBaseReader::prefix
	String_t* ___prefix_22;
	// System.String System.Xml.XmlBaseReader::localName
	String_t* ___localName_23;
	// System.String System.Xml.XmlBaseReader::ns
	String_t* ___ns_24;
	// System.String System.Xml.XmlBaseReader::value
	String_t* ___value_25;
	// System.Int32 System.Xml.XmlBaseReader::trailCharCount
	int32_t ___trailCharCount_26;
	// System.Int32 System.Xml.XmlBaseReader::trailByteCount
	int32_t ___trailByteCount_27;
	// System.Char[] System.Xml.XmlBaseReader::trailChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___trailChars_28;
	// System.Byte[] System.Xml.XmlBaseReader::trailBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___trailBytes_29;
	// System.Boolean System.Xml.XmlBaseReader::rootElement
	bool ___rootElement_30;
	// System.Boolean System.Xml.XmlBaseReader::readingElement
	bool ___readingElement_31;
	// System.Xml.XmlSigningNodeWriter System.Xml.XmlBaseReader::signingWriter
	XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * ___signingWriter_32;
	// System.Boolean System.Xml.XmlBaseReader::signing
	bool ___signing_33;
	// System.Xml.XmlBaseReader_AttributeSorter System.Xml.XmlBaseReader::attributeSorter
	AttributeSorter_t119E3ACE7E567FE8AED51F86477552EE2427495C * ___attributeSorter_34;

public:
	inline static int32_t get_offset_of_bufferReader_3() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___bufferReader_3)); }
	inline XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * get_bufferReader_3() const { return ___bufferReader_3; }
	inline XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A ** get_address_of_bufferReader_3() { return &___bufferReader_3; }
	inline void set_bufferReader_3(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * value)
	{
		___bufferReader_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferReader_3), (void*)value);
	}

	inline static int32_t get_offset_of_node_4() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___node_4)); }
	inline XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * get_node_4() const { return ___node_4; }
	inline XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 ** get_address_of_node_4() { return &___node_4; }
	inline void set_node_4(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * value)
	{
		___node_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node_4), (void*)value);
	}

	inline static int32_t get_offset_of_nsMgr_5() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___nsMgr_5)); }
	inline NamespaceManager_t6E38E1106AB1E20AA43B16CBCADBF923158925AE * get_nsMgr_5() const { return ___nsMgr_5; }
	inline NamespaceManager_t6E38E1106AB1E20AA43B16CBCADBF923158925AE ** get_address_of_nsMgr_5() { return &___nsMgr_5; }
	inline void set_nsMgr_5(NamespaceManager_t6E38E1106AB1E20AA43B16CBCADBF923158925AE * value)
	{
		___nsMgr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nsMgr_5), (void*)value);
	}

	inline static int32_t get_offset_of_elementNodes_6() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___elementNodes_6)); }
	inline XmlElementNodeU5BU5D_t780F02363A6F69724F1F01FB37C5310CE65BA89E* get_elementNodes_6() const { return ___elementNodes_6; }
	inline XmlElementNodeU5BU5D_t780F02363A6F69724F1F01FB37C5310CE65BA89E** get_address_of_elementNodes_6() { return &___elementNodes_6; }
	inline void set_elementNodes_6(XmlElementNodeU5BU5D_t780F02363A6F69724F1F01FB37C5310CE65BA89E* value)
	{
		___elementNodes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementNodes_6), (void*)value);
	}

	inline static int32_t get_offset_of_attributeNodes_7() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___attributeNodes_7)); }
	inline XmlAttributeNodeU5BU5D_t14A4EF50404F4DEF9FE20B15B0AFE27942DB1D9A* get_attributeNodes_7() const { return ___attributeNodes_7; }
	inline XmlAttributeNodeU5BU5D_t14A4EF50404F4DEF9FE20B15B0AFE27942DB1D9A** get_address_of_attributeNodes_7() { return &___attributeNodes_7; }
	inline void set_attributeNodes_7(XmlAttributeNodeU5BU5D_t14A4EF50404F4DEF9FE20B15B0AFE27942DB1D9A* value)
	{
		___attributeNodes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeNodes_7), (void*)value);
	}

	inline static int32_t get_offset_of_atomicTextNode_8() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___atomicTextNode_8)); }
	inline XmlAtomicTextNode_tDFAE6EC65DE6CD6DB1055BCA114ECADB1FBB851B * get_atomicTextNode_8() const { return ___atomicTextNode_8; }
	inline XmlAtomicTextNode_tDFAE6EC65DE6CD6DB1055BCA114ECADB1FBB851B ** get_address_of_atomicTextNode_8() { return &___atomicTextNode_8; }
	inline void set_atomicTextNode_8(XmlAtomicTextNode_tDFAE6EC65DE6CD6DB1055BCA114ECADB1FBB851B * value)
	{
		___atomicTextNode_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atomicTextNode_8), (void*)value);
	}

	inline static int32_t get_offset_of_depth_9() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___depth_9)); }
	inline int32_t get_depth_9() const { return ___depth_9; }
	inline int32_t* get_address_of_depth_9() { return &___depth_9; }
	inline void set_depth_9(int32_t value)
	{
		___depth_9 = value;
	}

	inline static int32_t get_offset_of_attributeCount_10() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___attributeCount_10)); }
	inline int32_t get_attributeCount_10() const { return ___attributeCount_10; }
	inline int32_t* get_address_of_attributeCount_10() { return &___attributeCount_10; }
	inline void set_attributeCount_10(int32_t value)
	{
		___attributeCount_10 = value;
	}

	inline static int32_t get_offset_of_attributeStart_11() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___attributeStart_11)); }
	inline int32_t get_attributeStart_11() const { return ___attributeStart_11; }
	inline int32_t* get_address_of_attributeStart_11() { return &___attributeStart_11; }
	inline void set_attributeStart_11(int32_t value)
	{
		___attributeStart_11 = value;
	}

	inline static int32_t get_offset_of_quotas_12() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___quotas_12)); }
	inline XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * get_quotas_12() const { return ___quotas_12; }
	inline XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 ** get_address_of_quotas_12() { return &___quotas_12; }
	inline void set_quotas_12(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * value)
	{
		___quotas_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quotas_12), (void*)value);
	}

	inline static int32_t get_offset_of_nameTable_13() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___nameTable_13)); }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * get_nameTable_13() const { return ___nameTable_13; }
	inline XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 ** get_address_of_nameTable_13() { return &___nameTable_13; }
	inline void set_nameTable_13(XmlNameTable_t3C1CDAB4E7D97DE41A409D6D9ADD2C10B1F281A6 * value)
	{
		___nameTable_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameTable_13), (void*)value);
	}

	inline static int32_t get_offset_of_declarationNode_14() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___declarationNode_14)); }
	inline XmlDeclarationNode_tF18E8BF011A44F0380942A5F3D8B600DA82CF3E5 * get_declarationNode_14() const { return ___declarationNode_14; }
	inline XmlDeclarationNode_tF18E8BF011A44F0380942A5F3D8B600DA82CF3E5 ** get_address_of_declarationNode_14() { return &___declarationNode_14; }
	inline void set_declarationNode_14(XmlDeclarationNode_tF18E8BF011A44F0380942A5F3D8B600DA82CF3E5 * value)
	{
		___declarationNode_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___declarationNode_14), (void*)value);
	}

	inline static int32_t get_offset_of_complexTextNode_15() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___complexTextNode_15)); }
	inline XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C * get_complexTextNode_15() const { return ___complexTextNode_15; }
	inline XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C ** get_address_of_complexTextNode_15() { return &___complexTextNode_15; }
	inline void set_complexTextNode_15(XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C * value)
	{
		___complexTextNode_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___complexTextNode_15), (void*)value);
	}

	inline static int32_t get_offset_of_whitespaceTextNode_16() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___whitespaceTextNode_16)); }
	inline XmlWhitespaceTextNode_tC982762FC475960453E77E05C137B70CF0A78F51 * get_whitespaceTextNode_16() const { return ___whitespaceTextNode_16; }
	inline XmlWhitespaceTextNode_tC982762FC475960453E77E05C137B70CF0A78F51 ** get_address_of_whitespaceTextNode_16() { return &___whitespaceTextNode_16; }
	inline void set_whitespaceTextNode_16(XmlWhitespaceTextNode_tC982762FC475960453E77E05C137B70CF0A78F51 * value)
	{
		___whitespaceTextNode_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___whitespaceTextNode_16), (void*)value);
	}

	inline static int32_t get_offset_of_cdataNode_17() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___cdataNode_17)); }
	inline XmlCDataNode_t466D5083F8B29DAD8C615C555412026D474EABF4 * get_cdataNode_17() const { return ___cdataNode_17; }
	inline XmlCDataNode_t466D5083F8B29DAD8C615C555412026D474EABF4 ** get_address_of_cdataNode_17() { return &___cdataNode_17; }
	inline void set_cdataNode_17(XmlCDataNode_t466D5083F8B29DAD8C615C555412026D474EABF4 * value)
	{
		___cdataNode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cdataNode_17), (void*)value);
	}

	inline static int32_t get_offset_of_commentNode_18() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___commentNode_18)); }
	inline XmlCommentNode_tC7CA5ECB98EC8FCC1AAA805B64B16642892AA2E6 * get_commentNode_18() const { return ___commentNode_18; }
	inline XmlCommentNode_tC7CA5ECB98EC8FCC1AAA805B64B16642892AA2E6 ** get_address_of_commentNode_18() { return &___commentNode_18; }
	inline void set_commentNode_18(XmlCommentNode_tC7CA5ECB98EC8FCC1AAA805B64B16642892AA2E6 * value)
	{
		___commentNode_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commentNode_18), (void*)value);
	}

	inline static int32_t get_offset_of_rootElementNode_19() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___rootElementNode_19)); }
	inline XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * get_rootElementNode_19() const { return ___rootElementNode_19; }
	inline XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC ** get_address_of_rootElementNode_19() { return &___rootElementNode_19; }
	inline void set_rootElementNode_19(XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * value)
	{
		___rootElementNode_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootElementNode_19), (void*)value);
	}

	inline static int32_t get_offset_of_attributeIndex_20() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___attributeIndex_20)); }
	inline int32_t get_attributeIndex_20() const { return ___attributeIndex_20; }
	inline int32_t* get_address_of_attributeIndex_20() { return &___attributeIndex_20; }
	inline void set_attributeIndex_20(int32_t value)
	{
		___attributeIndex_20 = value;
	}

	inline static int32_t get_offset_of_chars_21() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___chars_21)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_chars_21() const { return ___chars_21; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_chars_21() { return &___chars_21; }
	inline void set_chars_21(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___chars_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chars_21), (void*)value);
	}

	inline static int32_t get_offset_of_prefix_22() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___prefix_22)); }
	inline String_t* get_prefix_22() const { return ___prefix_22; }
	inline String_t** get_address_of_prefix_22() { return &___prefix_22; }
	inline void set_prefix_22(String_t* value)
	{
		___prefix_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_22), (void*)value);
	}

	inline static int32_t get_offset_of_localName_23() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___localName_23)); }
	inline String_t* get_localName_23() const { return ___localName_23; }
	inline String_t** get_address_of_localName_23() { return &___localName_23; }
	inline void set_localName_23(String_t* value)
	{
		___localName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_23), (void*)value);
	}

	inline static int32_t get_offset_of_ns_24() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___ns_24)); }
	inline String_t* get_ns_24() const { return ___ns_24; }
	inline String_t** get_address_of_ns_24() { return &___ns_24; }
	inline void set_ns_24(String_t* value)
	{
		___ns_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_24), (void*)value);
	}

	inline static int32_t get_offset_of_value_25() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___value_25)); }
	inline String_t* get_value_25() const { return ___value_25; }
	inline String_t** get_address_of_value_25() { return &___value_25; }
	inline void set_value_25(String_t* value)
	{
		___value_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_25), (void*)value);
	}

	inline static int32_t get_offset_of_trailCharCount_26() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___trailCharCount_26)); }
	inline int32_t get_trailCharCount_26() const { return ___trailCharCount_26; }
	inline int32_t* get_address_of_trailCharCount_26() { return &___trailCharCount_26; }
	inline void set_trailCharCount_26(int32_t value)
	{
		___trailCharCount_26 = value;
	}

	inline static int32_t get_offset_of_trailByteCount_27() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___trailByteCount_27)); }
	inline int32_t get_trailByteCount_27() const { return ___trailByteCount_27; }
	inline int32_t* get_address_of_trailByteCount_27() { return &___trailByteCount_27; }
	inline void set_trailByteCount_27(int32_t value)
	{
		___trailByteCount_27 = value;
	}

	inline static int32_t get_offset_of_trailChars_28() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___trailChars_28)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_trailChars_28() const { return ___trailChars_28; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_trailChars_28() { return &___trailChars_28; }
	inline void set_trailChars_28(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___trailChars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trailChars_28), (void*)value);
	}

	inline static int32_t get_offset_of_trailBytes_29() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___trailBytes_29)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_trailBytes_29() const { return ___trailBytes_29; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_trailBytes_29() { return &___trailBytes_29; }
	inline void set_trailBytes_29(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___trailBytes_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trailBytes_29), (void*)value);
	}

	inline static int32_t get_offset_of_rootElement_30() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___rootElement_30)); }
	inline bool get_rootElement_30() const { return ___rootElement_30; }
	inline bool* get_address_of_rootElement_30() { return &___rootElement_30; }
	inline void set_rootElement_30(bool value)
	{
		___rootElement_30 = value;
	}

	inline static int32_t get_offset_of_readingElement_31() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___readingElement_31)); }
	inline bool get_readingElement_31() const { return ___readingElement_31; }
	inline bool* get_address_of_readingElement_31() { return &___readingElement_31; }
	inline void set_readingElement_31(bool value)
	{
		___readingElement_31 = value;
	}

	inline static int32_t get_offset_of_signingWriter_32() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___signingWriter_32)); }
	inline XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * get_signingWriter_32() const { return ___signingWriter_32; }
	inline XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F ** get_address_of_signingWriter_32() { return &___signingWriter_32; }
	inline void set_signingWriter_32(XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * value)
	{
		___signingWriter_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signingWriter_32), (void*)value);
	}

	inline static int32_t get_offset_of_signing_33() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___signing_33)); }
	inline bool get_signing_33() const { return ___signing_33; }
	inline bool* get_address_of_signing_33() { return &___signing_33; }
	inline void set_signing_33(bool value)
	{
		___signing_33 = value;
	}

	inline static int32_t get_offset_of_attributeSorter_34() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269, ___attributeSorter_34)); }
	inline AttributeSorter_t119E3ACE7E567FE8AED51F86477552EE2427495C * get_attributeSorter_34() const { return ___attributeSorter_34; }
	inline AttributeSorter_t119E3ACE7E567FE8AED51F86477552EE2427495C ** get_address_of_attributeSorter_34() { return &___attributeSorter_34; }
	inline void set_attributeSorter_34(AttributeSorter_t119E3ACE7E567FE8AED51F86477552EE2427495C * value)
	{
		___attributeSorter_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeSorter_34), (void*)value);
	}
};

struct XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269_StaticFields
{
public:
	// System.Xml.XmlBaseReader_XmlInitialNode System.Xml.XmlBaseReader::initialNode
	XmlInitialNode_t4F08D36171C824A4C942D10312D7FB8BA46F7AF6 * ___initialNode_35;
	// System.Xml.XmlBaseReader_XmlEndOfFileNode System.Xml.XmlBaseReader::endOfFileNode
	XmlEndOfFileNode_tB54011DC278F12923128D2D5393AF17FDB1260E9 * ___endOfFileNode_36;
	// System.Xml.XmlBaseReader_XmlClosedNode System.Xml.XmlBaseReader::closedNode
	XmlClosedNode_t35CFC7C73F3DED6240AFFEC5A3B9E2BE0124AE0F * ___closedNode_37;
	// System.Text.BinHexEncoding System.Xml.XmlBaseReader::binhexEncoding
	BinHexEncoding_tCC6A5A53F6E82CA945043CFE84D2F4BB101EB1C6 * ___binhexEncoding_38;
	// System.Text.Base64Encoding System.Xml.XmlBaseReader::base64Encoding
	Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * ___base64Encoding_39;

public:
	inline static int32_t get_offset_of_initialNode_35() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269_StaticFields, ___initialNode_35)); }
	inline XmlInitialNode_t4F08D36171C824A4C942D10312D7FB8BA46F7AF6 * get_initialNode_35() const { return ___initialNode_35; }
	inline XmlInitialNode_t4F08D36171C824A4C942D10312D7FB8BA46F7AF6 ** get_address_of_initialNode_35() { return &___initialNode_35; }
	inline void set_initialNode_35(XmlInitialNode_t4F08D36171C824A4C942D10312D7FB8BA46F7AF6 * value)
	{
		___initialNode_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialNode_35), (void*)value);
	}

	inline static int32_t get_offset_of_endOfFileNode_36() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269_StaticFields, ___endOfFileNode_36)); }
	inline XmlEndOfFileNode_tB54011DC278F12923128D2D5393AF17FDB1260E9 * get_endOfFileNode_36() const { return ___endOfFileNode_36; }
	inline XmlEndOfFileNode_tB54011DC278F12923128D2D5393AF17FDB1260E9 ** get_address_of_endOfFileNode_36() { return &___endOfFileNode_36; }
	inline void set_endOfFileNode_36(XmlEndOfFileNode_tB54011DC278F12923128D2D5393AF17FDB1260E9 * value)
	{
		___endOfFileNode_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endOfFileNode_36), (void*)value);
	}

	inline static int32_t get_offset_of_closedNode_37() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269_StaticFields, ___closedNode_37)); }
	inline XmlClosedNode_t35CFC7C73F3DED6240AFFEC5A3B9E2BE0124AE0F * get_closedNode_37() const { return ___closedNode_37; }
	inline XmlClosedNode_t35CFC7C73F3DED6240AFFEC5A3B9E2BE0124AE0F ** get_address_of_closedNode_37() { return &___closedNode_37; }
	inline void set_closedNode_37(XmlClosedNode_t35CFC7C73F3DED6240AFFEC5A3B9E2BE0124AE0F * value)
	{
		___closedNode_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closedNode_37), (void*)value);
	}

	inline static int32_t get_offset_of_binhexEncoding_38() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269_StaticFields, ___binhexEncoding_38)); }
	inline BinHexEncoding_tCC6A5A53F6E82CA945043CFE84D2F4BB101EB1C6 * get_binhexEncoding_38() const { return ___binhexEncoding_38; }
	inline BinHexEncoding_tCC6A5A53F6E82CA945043CFE84D2F4BB101EB1C6 ** get_address_of_binhexEncoding_38() { return &___binhexEncoding_38; }
	inline void set_binhexEncoding_38(BinHexEncoding_tCC6A5A53F6E82CA945043CFE84D2F4BB101EB1C6 * value)
	{
		___binhexEncoding_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___binhexEncoding_38), (void*)value);
	}

	inline static int32_t get_offset_of_base64Encoding_39() { return static_cast<int32_t>(offsetof(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269_StaticFields, ___base64Encoding_39)); }
	inline Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * get_base64Encoding_39() const { return ___base64Encoding_39; }
	inline Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 ** get_address_of_base64Encoding_39() { return &___base64Encoding_39; }
	inline void set_base64Encoding_39(Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * value)
	{
		___base64Encoding_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Encoding_39), (void*)value);
	}
};


// System.Xml.XmlBaseReader_QNameType
struct  QNameType_t3E70090FC28596737C4CD1E62CCA4B591400671A 
{
public:
	// System.Int32 System.Xml.XmlBaseReader_QNameType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNameType_t3E70090FC28596737C4CD1E62CCA4B591400671A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlCanonicalWriter
struct  XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08  : public RuntimeObject
{
public:
	// System.Xml.XmlUTF8NodeWriter System.Xml.XmlCanonicalWriter::writer
	XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * ___writer_0;
	// System.IO.MemoryStream System.Xml.XmlCanonicalWriter::elementStream
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * ___elementStream_1;
	// System.Byte[] System.Xml.XmlCanonicalWriter::elementBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___elementBuffer_2;
	// System.Xml.XmlUTF8NodeWriter System.Xml.XmlCanonicalWriter::elementWriter
	XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * ___elementWriter_3;
	// System.Boolean System.Xml.XmlCanonicalWriter::inStartElement
	bool ___inStartElement_4;
	// System.Int32 System.Xml.XmlCanonicalWriter::depth
	int32_t ___depth_5;
	// System.Xml.XmlCanonicalWriter_Scope[] System.Xml.XmlCanonicalWriter::scopes
	ScopeU5BU5D_t03F7139D05CF01B1BEEA0AEFB92C7F7066C51F28* ___scopes_6;
	// System.Int32 System.Xml.XmlCanonicalWriter::xmlnsAttributeCount
	int32_t ___xmlnsAttributeCount_7;
	// System.Xml.XmlCanonicalWriter_XmlnsAttribute[] System.Xml.XmlCanonicalWriter::xmlnsAttributes
	XmlnsAttributeU5BU5D_t2349F96FF2998329871B48264D98BD7D0304699D* ___xmlnsAttributes_8;
	// System.Int32 System.Xml.XmlCanonicalWriter::attributeCount
	int32_t ___attributeCount_9;
	// System.Xml.XmlCanonicalWriter_Attribute[] System.Xml.XmlCanonicalWriter::attributes
	AttributeU5BU5D_tC5EAEF455AC745D1728EDD071651C02208217C3A* ___attributes_10;
	// System.Xml.XmlCanonicalWriter_Attribute System.Xml.XmlCanonicalWriter::attribute
	Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134  ___attribute_11;
	// System.Xml.XmlCanonicalWriter_Element System.Xml.XmlCanonicalWriter::element
	Element_tBF68781416E89C130232293C5ED500351055BE99  ___element_12;
	// System.Byte[] System.Xml.XmlCanonicalWriter::xmlnsBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___xmlnsBuffer_13;
	// System.Int32 System.Xml.XmlCanonicalWriter::xmlnsOffset
	int32_t ___xmlnsOffset_14;
	// System.Boolean System.Xml.XmlCanonicalWriter::includeComments
	bool ___includeComments_15;
	// System.String[] System.Xml.XmlCanonicalWriter::inclusivePrefixes
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___inclusivePrefixes_16;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___writer_0)); }
	inline XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * get_writer_0() const { return ___writer_0; }
	inline XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_0), (void*)value);
	}

	inline static int32_t get_offset_of_elementStream_1() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___elementStream_1)); }
	inline MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * get_elementStream_1() const { return ___elementStream_1; }
	inline MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C ** get_address_of_elementStream_1() { return &___elementStream_1; }
	inline void set_elementStream_1(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * value)
	{
		___elementStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementStream_1), (void*)value);
	}

	inline static int32_t get_offset_of_elementBuffer_2() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___elementBuffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_elementBuffer_2() const { return ___elementBuffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_elementBuffer_2() { return &___elementBuffer_2; }
	inline void set_elementBuffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___elementBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_elementWriter_3() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___elementWriter_3)); }
	inline XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * get_elementWriter_3() const { return ___elementWriter_3; }
	inline XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 ** get_address_of_elementWriter_3() { return &___elementWriter_3; }
	inline void set_elementWriter_3(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * value)
	{
		___elementWriter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elementWriter_3), (void*)value);
	}

	inline static int32_t get_offset_of_inStartElement_4() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___inStartElement_4)); }
	inline bool get_inStartElement_4() const { return ___inStartElement_4; }
	inline bool* get_address_of_inStartElement_4() { return &___inStartElement_4; }
	inline void set_inStartElement_4(bool value)
	{
		___inStartElement_4 = value;
	}

	inline static int32_t get_offset_of_depth_5() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___depth_5)); }
	inline int32_t get_depth_5() const { return ___depth_5; }
	inline int32_t* get_address_of_depth_5() { return &___depth_5; }
	inline void set_depth_5(int32_t value)
	{
		___depth_5 = value;
	}

	inline static int32_t get_offset_of_scopes_6() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___scopes_6)); }
	inline ScopeU5BU5D_t03F7139D05CF01B1BEEA0AEFB92C7F7066C51F28* get_scopes_6() const { return ___scopes_6; }
	inline ScopeU5BU5D_t03F7139D05CF01B1BEEA0AEFB92C7F7066C51F28** get_address_of_scopes_6() { return &___scopes_6; }
	inline void set_scopes_6(ScopeU5BU5D_t03F7139D05CF01B1BEEA0AEFB92C7F7066C51F28* value)
	{
		___scopes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scopes_6), (void*)value);
	}

	inline static int32_t get_offset_of_xmlnsAttributeCount_7() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___xmlnsAttributeCount_7)); }
	inline int32_t get_xmlnsAttributeCount_7() const { return ___xmlnsAttributeCount_7; }
	inline int32_t* get_address_of_xmlnsAttributeCount_7() { return &___xmlnsAttributeCount_7; }
	inline void set_xmlnsAttributeCount_7(int32_t value)
	{
		___xmlnsAttributeCount_7 = value;
	}

	inline static int32_t get_offset_of_xmlnsAttributes_8() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___xmlnsAttributes_8)); }
	inline XmlnsAttributeU5BU5D_t2349F96FF2998329871B48264D98BD7D0304699D* get_xmlnsAttributes_8() const { return ___xmlnsAttributes_8; }
	inline XmlnsAttributeU5BU5D_t2349F96FF2998329871B48264D98BD7D0304699D** get_address_of_xmlnsAttributes_8() { return &___xmlnsAttributes_8; }
	inline void set_xmlnsAttributes_8(XmlnsAttributeU5BU5D_t2349F96FF2998329871B48264D98BD7D0304699D* value)
	{
		___xmlnsAttributes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlnsAttributes_8), (void*)value);
	}

	inline static int32_t get_offset_of_attributeCount_9() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___attributeCount_9)); }
	inline int32_t get_attributeCount_9() const { return ___attributeCount_9; }
	inline int32_t* get_address_of_attributeCount_9() { return &___attributeCount_9; }
	inline void set_attributeCount_9(int32_t value)
	{
		___attributeCount_9 = value;
	}

	inline static int32_t get_offset_of_attributes_10() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___attributes_10)); }
	inline AttributeU5BU5D_tC5EAEF455AC745D1728EDD071651C02208217C3A* get_attributes_10() const { return ___attributes_10; }
	inline AttributeU5BU5D_tC5EAEF455AC745D1728EDD071651C02208217C3A** get_address_of_attributes_10() { return &___attributes_10; }
	inline void set_attributes_10(AttributeU5BU5D_tC5EAEF455AC745D1728EDD071651C02208217C3A* value)
	{
		___attributes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_10), (void*)value);
	}

	inline static int32_t get_offset_of_attribute_11() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___attribute_11)); }
	inline Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134  get_attribute_11() const { return ___attribute_11; }
	inline Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134 * get_address_of_attribute_11() { return &___attribute_11; }
	inline void set_attribute_11(Attribute_tBCFAB870E5B56B2D11D95ABDAAFE264728737134  value)
	{
		___attribute_11 = value;
	}

	inline static int32_t get_offset_of_element_12() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___element_12)); }
	inline Element_tBF68781416E89C130232293C5ED500351055BE99  get_element_12() const { return ___element_12; }
	inline Element_tBF68781416E89C130232293C5ED500351055BE99 * get_address_of_element_12() { return &___element_12; }
	inline void set_element_12(Element_tBF68781416E89C130232293C5ED500351055BE99  value)
	{
		___element_12 = value;
	}

	inline static int32_t get_offset_of_xmlnsBuffer_13() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___xmlnsBuffer_13)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_xmlnsBuffer_13() const { return ___xmlnsBuffer_13; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_xmlnsBuffer_13() { return &___xmlnsBuffer_13; }
	inline void set_xmlnsBuffer_13(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___xmlnsBuffer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xmlnsBuffer_13), (void*)value);
	}

	inline static int32_t get_offset_of_xmlnsOffset_14() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___xmlnsOffset_14)); }
	inline int32_t get_xmlnsOffset_14() const { return ___xmlnsOffset_14; }
	inline int32_t* get_address_of_xmlnsOffset_14() { return &___xmlnsOffset_14; }
	inline void set_xmlnsOffset_14(int32_t value)
	{
		___xmlnsOffset_14 = value;
	}

	inline static int32_t get_offset_of_includeComments_15() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___includeComments_15)); }
	inline bool get_includeComments_15() const { return ___includeComments_15; }
	inline bool* get_address_of_includeComments_15() { return &___includeComments_15; }
	inline void set_includeComments_15(bool value)
	{
		___includeComments_15 = value;
	}

	inline static int32_t get_offset_of_inclusivePrefixes_16() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08, ___inclusivePrefixes_16)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_inclusivePrefixes_16() const { return ___inclusivePrefixes_16; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_inclusivePrefixes_16() { return &___inclusivePrefixes_16; }
	inline void set_inclusivePrefixes_16(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___inclusivePrefixes_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inclusivePrefixes_16), (void*)value);
	}
};

struct XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08_StaticFields
{
public:
	// System.Boolean[] System.Xml.XmlCanonicalWriter::isEscapedAttributeChar
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___isEscapedAttributeChar_17;
	// System.Boolean[] System.Xml.XmlCanonicalWriter::isEscapedElementChar
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___isEscapedElementChar_18;

public:
	inline static int32_t get_offset_of_isEscapedAttributeChar_17() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08_StaticFields, ___isEscapedAttributeChar_17)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get_isEscapedAttributeChar_17() const { return ___isEscapedAttributeChar_17; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of_isEscapedAttributeChar_17() { return &___isEscapedAttributeChar_17; }
	inline void set_isEscapedAttributeChar_17(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		___isEscapedAttributeChar_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isEscapedAttributeChar_17), (void*)value);
	}

	inline static int32_t get_offset_of_isEscapedElementChar_18() { return static_cast<int32_t>(offsetof(XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08_StaticFields, ___isEscapedElementChar_18)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get_isEscapedElementChar_18() const { return ___isEscapedElementChar_18; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of_isEscapedElementChar_18() { return &___isEscapedElementChar_18; }
	inline void set_isEscapedElementChar_18(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		___isEscapedElementChar_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isEscapedElementChar_18), (void*)value);
	}
};


// System.Xml.XmlDictionaryReaderQuotaTypes
struct  XmlDictionaryReaderQuotaTypes_t6C7A177B1F856A5023493D9FF28D2A3AA99277CF 
{
public:
	// System.Int32 System.Xml.XmlDictionaryReaderQuotaTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlDictionaryReaderQuotaTypes_t6C7A177B1F856A5023493D9FF28D2A3AA99277CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlException
struct  XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.Xml.XmlException::res
	String_t* ___res_17;
	// System.String[] System.Xml.XmlException::args
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___args_18;
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_19;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_20;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_21;
	// System.String System.Xml.XmlException::message
	String_t* ___message_22;

public:
	inline static int32_t get_offset_of_res_17() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___res_17)); }
	inline String_t* get_res_17() const { return ___res_17; }
	inline String_t** get_address_of_res_17() { return &___res_17; }
	inline void set_res_17(String_t* value)
	{
		___res_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___res_17), (void*)value);
	}

	inline static int32_t get_offset_of_args_18() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___args_18)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_args_18() const { return ___args_18; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_args_18() { return &___args_18; }
	inline void set_args_18(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___args_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_18), (void*)value);
	}

	inline static int32_t get_offset_of_lineNumber_19() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___lineNumber_19)); }
	inline int32_t get_lineNumber_19() const { return ___lineNumber_19; }
	inline int32_t* get_address_of_lineNumber_19() { return &___lineNumber_19; }
	inline void set_lineNumber_19(int32_t value)
	{
		___lineNumber_19 = value;
	}

	inline static int32_t get_offset_of_linePosition_20() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___linePosition_20)); }
	inline int32_t get_linePosition_20() const { return ___linePosition_20; }
	inline int32_t* get_address_of_linePosition_20() { return &___linePosition_20; }
	inline void set_linePosition_20(int32_t value)
	{
		___linePosition_20 = value;
	}

	inline static int32_t get_offset_of_sourceUri_21() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___sourceUri_21)); }
	inline String_t* get_sourceUri_21() const { return ___sourceUri_21; }
	inline String_t** get_address_of_sourceUri_21() { return &___sourceUri_21; }
	inline void set_sourceUri_21(String_t* value)
	{
		___sourceUri_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceUri_21), (void*)value);
	}

	inline static int32_t get_offset_of_message_22() { return static_cast<int32_t>(offsetof(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D, ___message_22)); }
	inline String_t* get_message_22() const { return ___message_22; }
	inline String_t** get_address_of_message_22() { return &___message_22; }
	inline void set_message_22(String_t* value)
	{
		___message_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_22), (void*)value);
	}
};


// System.Xml.XmlNodeType
struct  XmlNodeType_tEE56AC4F9EC36B979516EA5836C4DA730B0A21E1 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_tEE56AC4F9EC36B979516EA5836C4DA730B0A21E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlUTF8NodeWriter
struct  XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1  : public XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29
{
public:
	// System.Byte[] System.Xml.XmlUTF8NodeWriter::entityChars
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___entityChars_6;
	// System.Boolean[] System.Xml.XmlUTF8NodeWriter::isEscapedAttributeChar
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___isEscapedAttributeChar_7;
	// System.Boolean[] System.Xml.XmlUTF8NodeWriter::isEscapedElementChar
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___isEscapedElementChar_8;
	// System.Boolean System.Xml.XmlUTF8NodeWriter::inAttribute
	bool ___inAttribute_9;
	// System.Text.Encoding System.Xml.XmlUTF8NodeWriter::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_10;
	// System.Char[] System.Xml.XmlUTF8NodeWriter::chars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars_11;

public:
	inline static int32_t get_offset_of_entityChars_6() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1, ___entityChars_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_entityChars_6() const { return ___entityChars_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_entityChars_6() { return &___entityChars_6; }
	inline void set_entityChars_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___entityChars_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entityChars_6), (void*)value);
	}

	inline static int32_t get_offset_of_isEscapedAttributeChar_7() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1, ___isEscapedAttributeChar_7)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get_isEscapedAttributeChar_7() const { return ___isEscapedAttributeChar_7; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of_isEscapedAttributeChar_7() { return &___isEscapedAttributeChar_7; }
	inline void set_isEscapedAttributeChar_7(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		___isEscapedAttributeChar_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isEscapedAttributeChar_7), (void*)value);
	}

	inline static int32_t get_offset_of_isEscapedElementChar_8() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1, ___isEscapedElementChar_8)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get_isEscapedElementChar_8() const { return ___isEscapedElementChar_8; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of_isEscapedElementChar_8() { return &___isEscapedElementChar_8; }
	inline void set_isEscapedElementChar_8(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		___isEscapedElementChar_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isEscapedElementChar_8), (void*)value);
	}

	inline static int32_t get_offset_of_inAttribute_9() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1, ___inAttribute_9)); }
	inline bool get_inAttribute_9() const { return ___inAttribute_9; }
	inline bool* get_address_of_inAttribute_9() { return &___inAttribute_9; }
	inline void set_inAttribute_9(bool value)
	{
		___inAttribute_9 = value;
	}

	inline static int32_t get_offset_of_encoding_10() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1, ___encoding_10)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_10() const { return ___encoding_10; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_10() { return &___encoding_10; }
	inline void set_encoding_10(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_10), (void*)value);
	}

	inline static int32_t get_offset_of_chars_11() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1, ___chars_11)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_chars_11() const { return ___chars_11; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_chars_11() { return &___chars_11; }
	inline void set_chars_11(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___chars_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chars_11), (void*)value);
	}
};

struct XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields
{
public:
	// System.Byte[] System.Xml.XmlUTF8NodeWriter::startDecl
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___startDecl_12;
	// System.Byte[] System.Xml.XmlUTF8NodeWriter::endDecl
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___endDecl_13;
	// System.Byte[] System.Xml.XmlUTF8NodeWriter::utf8Decl
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___utf8Decl_14;
	// System.Byte[] System.Xml.XmlUTF8NodeWriter::digits
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___digits_15;
	// System.Boolean[] System.Xml.XmlUTF8NodeWriter::defaultIsEscapedAttributeChar
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___defaultIsEscapedAttributeChar_16;
	// System.Boolean[] System.Xml.XmlUTF8NodeWriter::defaultIsEscapedElementChar
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___defaultIsEscapedElementChar_17;

public:
	inline static int32_t get_offset_of_startDecl_12() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields, ___startDecl_12)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_startDecl_12() const { return ___startDecl_12; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_startDecl_12() { return &___startDecl_12; }
	inline void set_startDecl_12(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___startDecl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startDecl_12), (void*)value);
	}

	inline static int32_t get_offset_of_endDecl_13() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields, ___endDecl_13)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_endDecl_13() const { return ___endDecl_13; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_endDecl_13() { return &___endDecl_13; }
	inline void set_endDecl_13(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___endDecl_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endDecl_13), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Decl_14() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields, ___utf8Decl_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_utf8Decl_14() const { return ___utf8Decl_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_utf8Decl_14() { return &___utf8Decl_14; }
	inline void set_utf8Decl_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___utf8Decl_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Decl_14), (void*)value);
	}

	inline static int32_t get_offset_of_digits_15() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields, ___digits_15)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_digits_15() const { return ___digits_15; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_digits_15() { return &___digits_15; }
	inline void set_digits_15(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___digits_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digits_15), (void*)value);
	}

	inline static int32_t get_offset_of_defaultIsEscapedAttributeChar_16() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields, ___defaultIsEscapedAttributeChar_16)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get_defaultIsEscapedAttributeChar_16() const { return ___defaultIsEscapedAttributeChar_16; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of_defaultIsEscapedAttributeChar_16() { return &___defaultIsEscapedAttributeChar_16; }
	inline void set_defaultIsEscapedAttributeChar_16(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		___defaultIsEscapedAttributeChar_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultIsEscapedAttributeChar_16), (void*)value);
	}

	inline static int32_t get_offset_of_defaultIsEscapedElementChar_17() { return static_cast<int32_t>(offsetof(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields, ___defaultIsEscapedElementChar_17)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get_defaultIsEscapedElementChar_17() const { return ___defaultIsEscapedElementChar_17; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of_defaultIsEscapedElementChar_17() { return &___defaultIsEscapedElementChar_17; }
	inline void set_defaultIsEscapedElementChar_17(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		___defaultIsEscapedElementChar_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultIsEscapedElementChar_17), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nativeDigits_19)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Xml.EncodingStreamWrapper
struct  EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Xml.EncodingStreamWrapper_SupportedEncoding System.Xml.EncodingStreamWrapper::encodingCode
	int32_t ___encodingCode_16;
	// System.Text.Encoding System.Xml.EncodingStreamWrapper::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_17;
	// System.Text.Encoder System.Xml.EncodingStreamWrapper::enc
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ___enc_18;
	// System.Text.Decoder System.Xml.EncodingStreamWrapper::dec
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___dec_19;
	// System.Boolean System.Xml.EncodingStreamWrapper::isReading
	bool ___isReading_20;
	// System.IO.Stream System.Xml.EncodingStreamWrapper::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_21;
	// System.Char[] System.Xml.EncodingStreamWrapper::chars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars_22;
	// System.Byte[] System.Xml.EncodingStreamWrapper::bytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes_23;
	// System.Int32 System.Xml.EncodingStreamWrapper::byteOffset
	int32_t ___byteOffset_24;
	// System.Int32 System.Xml.EncodingStreamWrapper::byteCount
	int32_t ___byteCount_25;
	// System.Byte[] System.Xml.EncodingStreamWrapper::byteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteBuffer_26;

public:
	inline static int32_t get_offset_of_encodingCode_16() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___encodingCode_16)); }
	inline int32_t get_encodingCode_16() const { return ___encodingCode_16; }
	inline int32_t* get_address_of_encodingCode_16() { return &___encodingCode_16; }
	inline void set_encodingCode_16(int32_t value)
	{
		___encodingCode_16 = value;
	}

	inline static int32_t get_offset_of_encoding_17() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___encoding_17)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_17() const { return ___encoding_17; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_17() { return &___encoding_17; }
	inline void set_encoding_17(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_17), (void*)value);
	}

	inline static int32_t get_offset_of_enc_18() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___enc_18)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get_enc_18() const { return ___enc_18; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of_enc_18() { return &___enc_18; }
	inline void set_enc_18(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		___enc_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enc_18), (void*)value);
	}

	inline static int32_t get_offset_of_dec_19() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___dec_19)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_dec_19() const { return ___dec_19; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_dec_19() { return &___dec_19; }
	inline void set_dec_19(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___dec_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dec_19), (void*)value);
	}

	inline static int32_t get_offset_of_isReading_20() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___isReading_20)); }
	inline bool get_isReading_20() const { return ___isReading_20; }
	inline bool* get_address_of_isReading_20() { return &___isReading_20; }
	inline void set_isReading_20(bool value)
	{
		___isReading_20 = value;
	}

	inline static int32_t get_offset_of_stream_21() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___stream_21)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_21() const { return ___stream_21; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_21() { return &___stream_21; }
	inline void set_stream_21(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_21), (void*)value);
	}

	inline static int32_t get_offset_of_chars_22() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___chars_22)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_chars_22() const { return ___chars_22; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_chars_22() { return &___chars_22; }
	inline void set_chars_22(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___chars_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chars_22), (void*)value);
	}

	inline static int32_t get_offset_of_bytes_23() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___bytes_23)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_bytes_23() const { return ___bytes_23; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_bytes_23() { return &___bytes_23; }
	inline void set_bytes_23(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___bytes_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytes_23), (void*)value);
	}

	inline static int32_t get_offset_of_byteOffset_24() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___byteOffset_24)); }
	inline int32_t get_byteOffset_24() const { return ___byteOffset_24; }
	inline int32_t* get_address_of_byteOffset_24() { return &___byteOffset_24; }
	inline void set_byteOffset_24(int32_t value)
	{
		___byteOffset_24 = value;
	}

	inline static int32_t get_offset_of_byteCount_25() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___byteCount_25)); }
	inline int32_t get_byteCount_25() const { return ___byteCount_25; }
	inline int32_t* get_address_of_byteCount_25() { return &___byteCount_25; }
	inline void set_byteCount_25(int32_t value)
	{
		___byteCount_25 = value;
	}

	inline static int32_t get_offset_of_byteBuffer_26() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1, ___byteBuffer_26)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_byteBuffer_26() const { return ___byteBuffer_26; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_byteBuffer_26() { return &___byteBuffer_26; }
	inline void set_byteBuffer_26(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___byteBuffer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_26), (void*)value);
	}
};

struct EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields
{
public:
	// System.Text.UTF8Encoding System.Xml.EncodingStreamWrapper::SafeUTF8
	UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * ___SafeUTF8_5;
	// System.Text.UnicodeEncoding System.Xml.EncodingStreamWrapper::SafeUTF16
	UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * ___SafeUTF16_6;
	// System.Text.UnicodeEncoding System.Xml.EncodingStreamWrapper::SafeBEUTF16
	UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * ___SafeBEUTF16_7;
	// System.Text.UTF8Encoding System.Xml.EncodingStreamWrapper::ValidatingUTF8
	UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * ___ValidatingUTF8_8;
	// System.Text.UnicodeEncoding System.Xml.EncodingStreamWrapper::ValidatingUTF16
	UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * ___ValidatingUTF16_9;
	// System.Text.UnicodeEncoding System.Xml.EncodingStreamWrapper::ValidatingBEUTF16
	UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * ___ValidatingBEUTF16_10;
	// System.Byte[] System.Xml.EncodingStreamWrapper::encodingAttr
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___encodingAttr_11;
	// System.Byte[] System.Xml.EncodingStreamWrapper::encodingUTF8
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___encodingUTF8_12;
	// System.Byte[] System.Xml.EncodingStreamWrapper::encodingUnicode
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___encodingUnicode_13;
	// System.Byte[] System.Xml.EncodingStreamWrapper::encodingUnicodeLE
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___encodingUnicodeLE_14;
	// System.Byte[] System.Xml.EncodingStreamWrapper::encodingUnicodeBE
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___encodingUnicodeBE_15;

public:
	inline static int32_t get_offset_of_SafeUTF8_5() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___SafeUTF8_5)); }
	inline UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * get_SafeUTF8_5() const { return ___SafeUTF8_5; }
	inline UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE ** get_address_of_SafeUTF8_5() { return &___SafeUTF8_5; }
	inline void set_SafeUTF8_5(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * value)
	{
		___SafeUTF8_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SafeUTF8_5), (void*)value);
	}

	inline static int32_t get_offset_of_SafeUTF16_6() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___SafeUTF16_6)); }
	inline UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * get_SafeUTF16_6() const { return ___SafeUTF16_6; }
	inline UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 ** get_address_of_SafeUTF16_6() { return &___SafeUTF16_6; }
	inline void set_SafeUTF16_6(UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * value)
	{
		___SafeUTF16_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SafeUTF16_6), (void*)value);
	}

	inline static int32_t get_offset_of_SafeBEUTF16_7() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___SafeBEUTF16_7)); }
	inline UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * get_SafeBEUTF16_7() const { return ___SafeBEUTF16_7; }
	inline UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 ** get_address_of_SafeBEUTF16_7() { return &___SafeBEUTF16_7; }
	inline void set_SafeBEUTF16_7(UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * value)
	{
		___SafeBEUTF16_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SafeBEUTF16_7), (void*)value);
	}

	inline static int32_t get_offset_of_ValidatingUTF8_8() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___ValidatingUTF8_8)); }
	inline UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * get_ValidatingUTF8_8() const { return ___ValidatingUTF8_8; }
	inline UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE ** get_address_of_ValidatingUTF8_8() { return &___ValidatingUTF8_8; }
	inline void set_ValidatingUTF8_8(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * value)
	{
		___ValidatingUTF8_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValidatingUTF8_8), (void*)value);
	}

	inline static int32_t get_offset_of_ValidatingUTF16_9() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___ValidatingUTF16_9)); }
	inline UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * get_ValidatingUTF16_9() const { return ___ValidatingUTF16_9; }
	inline UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 ** get_address_of_ValidatingUTF16_9() { return &___ValidatingUTF16_9; }
	inline void set_ValidatingUTF16_9(UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * value)
	{
		___ValidatingUTF16_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValidatingUTF16_9), (void*)value);
	}

	inline static int32_t get_offset_of_ValidatingBEUTF16_10() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___ValidatingBEUTF16_10)); }
	inline UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * get_ValidatingBEUTF16_10() const { return ___ValidatingBEUTF16_10; }
	inline UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 ** get_address_of_ValidatingBEUTF16_10() { return &___ValidatingBEUTF16_10; }
	inline void set_ValidatingBEUTF16_10(UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * value)
	{
		___ValidatingBEUTF16_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValidatingBEUTF16_10), (void*)value);
	}

	inline static int32_t get_offset_of_encodingAttr_11() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___encodingAttr_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_encodingAttr_11() const { return ___encodingAttr_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_encodingAttr_11() { return &___encodingAttr_11; }
	inline void set_encodingAttr_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___encodingAttr_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodingAttr_11), (void*)value);
	}

	inline static int32_t get_offset_of_encodingUTF8_12() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___encodingUTF8_12)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_encodingUTF8_12() const { return ___encodingUTF8_12; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_encodingUTF8_12() { return &___encodingUTF8_12; }
	inline void set_encodingUTF8_12(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___encodingUTF8_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodingUTF8_12), (void*)value);
	}

	inline static int32_t get_offset_of_encodingUnicode_13() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___encodingUnicode_13)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_encodingUnicode_13() const { return ___encodingUnicode_13; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_encodingUnicode_13() { return &___encodingUnicode_13; }
	inline void set_encodingUnicode_13(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___encodingUnicode_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodingUnicode_13), (void*)value);
	}

	inline static int32_t get_offset_of_encodingUnicodeLE_14() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___encodingUnicodeLE_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_encodingUnicodeLE_14() const { return ___encodingUnicodeLE_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_encodingUnicodeLE_14() { return &___encodingUnicodeLE_14; }
	inline void set_encodingUnicodeLE_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___encodingUnicodeLE_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodingUnicodeLE_14), (void*)value);
	}

	inline static int32_t get_offset_of_encodingUnicodeBE_15() { return static_cast<int32_t>(offsetof(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_StaticFields, ___encodingUnicodeBE_15)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_encodingUnicodeBE_15() const { return ___encodingUnicodeBE_15; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_encodingUnicodeBE_15() { return &___encodingUnicodeBE_15; }
	inline void set_encodingUnicodeBE_15(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___encodingUnicodeBE_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodingUnicodeBE_15), (void*)value);
	}
};


// System.Xml.PrefixHandle
struct  PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93  : public RuntimeObject
{
public:
	// System.Xml.XmlBufferReader System.Xml.PrefixHandle::bufferReader
	XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * ___bufferReader_0;
	// System.Xml.PrefixHandleType System.Xml.PrefixHandle::type
	int32_t ___type_1;
	// System.Int32 System.Xml.PrefixHandle::offset
	int32_t ___offset_2;
	// System.Int32 System.Xml.PrefixHandle::length
	int32_t ___length_3;

public:
	inline static int32_t get_offset_of_bufferReader_0() { return static_cast<int32_t>(offsetof(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93, ___bufferReader_0)); }
	inline XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * get_bufferReader_0() const { return ___bufferReader_0; }
	inline XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A ** get_address_of_bufferReader_0() { return &___bufferReader_0; }
	inline void set_bufferReader_0(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * value)
	{
		___bufferReader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferReader_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93, ___length_3)); }
	inline int32_t get_length_3() const { return ___length_3; }
	inline int32_t* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(int32_t value)
	{
		___length_3 = value;
	}
};

struct PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93_StaticFields
{
public:
	// System.String[] System.Xml.PrefixHandle::prefixStrings
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___prefixStrings_4;
	// System.Byte[] System.Xml.PrefixHandle::prefixBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer_5;

public:
	inline static int32_t get_offset_of_prefixStrings_4() { return static_cast<int32_t>(offsetof(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93_StaticFields, ___prefixStrings_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_prefixStrings_4() const { return ___prefixStrings_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_prefixStrings_4() { return &___prefixStrings_4; }
	inline void set_prefixStrings_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___prefixStrings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefixStrings_4), (void*)value);
	}

	inline static int32_t get_offset_of_prefixBuffer_5() { return static_cast<int32_t>(offsetof(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93_StaticFields, ___prefixBuffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_prefixBuffer_5() const { return ___prefixBuffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_prefixBuffer_5() { return &___prefixBuffer_5; }
	inline void set_prefixBuffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___prefixBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefixBuffer_5), (void*)value);
	}
};


// System.Xml.StringHandle
struct  StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE  : public RuntimeObject
{
public:
	// System.Xml.XmlBufferReader System.Xml.StringHandle::bufferReader
	XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * ___bufferReader_0;
	// System.Xml.StringHandle_StringHandleType System.Xml.StringHandle::type
	int32_t ___type_1;
	// System.Int32 System.Xml.StringHandle::key
	int32_t ___key_2;
	// System.Int32 System.Xml.StringHandle::offset
	int32_t ___offset_3;
	// System.Int32 System.Xml.StringHandle::length
	int32_t ___length_4;

public:
	inline static int32_t get_offset_of_bufferReader_0() { return static_cast<int32_t>(offsetof(StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE, ___bufferReader_0)); }
	inline XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * get_bufferReader_0() const { return ___bufferReader_0; }
	inline XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A ** get_address_of_bufferReader_0() { return &___bufferReader_0; }
	inline void set_bufferReader_0(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * value)
	{
		___bufferReader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferReader_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE, ___key_2)); }
	inline int32_t get_key_2() const { return ___key_2; }
	inline int32_t* get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(int32_t value)
	{
		___key_2 = value;
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}
};

struct StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE_StaticFields
{
public:
	// System.String[] System.Xml.StringHandle::constStrings
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___constStrings_5;

public:
	inline static int32_t get_offset_of_constStrings_5() { return static_cast<int32_t>(offsetof(StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE_StaticFields, ___constStrings_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_constStrings_5() const { return ___constStrings_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_constStrings_5() { return &___constStrings_5; }
	inline void set_constStrings_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___constStrings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constStrings_5), (void*)value);
	}
};


// System.Xml.ValueHandle
struct  ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8  : public RuntimeObject
{
public:
	// System.Xml.XmlBufferReader System.Xml.ValueHandle::bufferReader
	XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * ___bufferReader_0;
	// System.Xml.ValueHandleType System.Xml.ValueHandle::type
	int32_t ___type_1;
	// System.Int32 System.Xml.ValueHandle::offset
	int32_t ___offset_2;
	// System.Int32 System.Xml.ValueHandle::length
	int32_t ___length_3;

public:
	inline static int32_t get_offset_of_bufferReader_0() { return static_cast<int32_t>(offsetof(ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8, ___bufferReader_0)); }
	inline XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * get_bufferReader_0() const { return ___bufferReader_0; }
	inline XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A ** get_address_of_bufferReader_0() { return &___bufferReader_0; }
	inline void set_bufferReader_0(XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * value)
	{
		___bufferReader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferReader_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8, ___length_3)); }
	inline int32_t get_length_3() const { return ___length_3; }
	inline int32_t* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(int32_t value)
	{
		___length_3 = value;
	}
};

struct ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8_StaticFields
{
public:
	// System.Text.Base64Encoding System.Xml.ValueHandle::base64Encoding
	Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * ___base64Encoding_4;
	// System.String[] System.Xml.ValueHandle::constStrings
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___constStrings_5;

public:
	inline static int32_t get_offset_of_base64Encoding_4() { return static_cast<int32_t>(offsetof(ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8_StaticFields, ___base64Encoding_4)); }
	inline Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * get_base64Encoding_4() const { return ___base64Encoding_4; }
	inline Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 ** get_address_of_base64Encoding_4() { return &___base64Encoding_4; }
	inline void set_base64Encoding_4(Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * value)
	{
		___base64Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_constStrings_5() { return static_cast<int32_t>(offsetof(ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8_StaticFields, ___constStrings_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_constStrings_5() const { return ___constStrings_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_constStrings_5() { return &___constStrings_5; }
	inline void set_constStrings_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___constStrings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constStrings_5), (void*)value);
	}
};


// System.Xml.XmlBaseReader_XmlNode
struct  XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0  : public RuntimeObject
{
public:
	// System.Xml.XmlNodeType System.Xml.XmlBaseReader_XmlNode::nodeType
	int32_t ___nodeType_0;
	// System.Xml.PrefixHandle System.Xml.XmlBaseReader_XmlNode::prefix
	PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * ___prefix_1;
	// System.Xml.StringHandle System.Xml.XmlBaseReader_XmlNode::localName
	StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * ___localName_2;
	// System.Xml.ValueHandle System.Xml.XmlBaseReader_XmlNode::value
	ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * ___value_3;
	// System.Xml.XmlBaseReader_Namespace System.Xml.XmlBaseReader_XmlNode::ns
	Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * ___ns_4;
	// System.Boolean System.Xml.XmlBaseReader_XmlNode::hasValue
	bool ___hasValue_5;
	// System.Boolean System.Xml.XmlBaseReader_XmlNode::canGetAttribute
	bool ___canGetAttribute_6;
	// System.Boolean System.Xml.XmlBaseReader_XmlNode::canMoveToElement
	bool ___canMoveToElement_7;
	// System.Xml.ReadState System.Xml.XmlBaseReader_XmlNode::readState
	int32_t ___readState_8;
	// System.Xml.XmlBaseReader_XmlAttributeTextNode System.Xml.XmlBaseReader_XmlNode::attributeTextNode
	XmlAttributeTextNode_tD0D863F095379F50FBB322B76F3159F3E7995C16 * ___attributeTextNode_9;
	// System.Boolean System.Xml.XmlBaseReader_XmlNode::exitScope
	bool ___exitScope_10;
	// System.Int32 System.Xml.XmlBaseReader_XmlNode::depthDelta
	int32_t ___depthDelta_11;
	// System.Boolean System.Xml.XmlBaseReader_XmlNode::isAtomicValue
	bool ___isAtomicValue_12;
	// System.Boolean System.Xml.XmlBaseReader_XmlNode::skipValue
	bool ___skipValue_13;
	// System.Xml.XmlBaseReader_QNameType System.Xml.XmlBaseReader_XmlNode::qnameType
	int32_t ___qnameType_14;
	// System.Boolean System.Xml.XmlBaseReader_XmlNode::hasContent
	bool ___hasContent_15;
	// System.Boolean System.Xml.XmlBaseReader_XmlNode::isEmptyElement
	bool ___isEmptyElement_16;
	// System.Char System.Xml.XmlBaseReader_XmlNode::quoteChar
	Il2CppChar ___quoteChar_17;

public:
	inline static int32_t get_offset_of_nodeType_0() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___nodeType_0)); }
	inline int32_t get_nodeType_0() const { return ___nodeType_0; }
	inline int32_t* get_address_of_nodeType_0() { return &___nodeType_0; }
	inline void set_nodeType_0(int32_t value)
	{
		___nodeType_0 = value;
	}

	inline static int32_t get_offset_of_prefix_1() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___prefix_1)); }
	inline PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * get_prefix_1() const { return ___prefix_1; }
	inline PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 ** get_address_of_prefix_1() { return &___prefix_1; }
	inline void set_prefix_1(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * value)
	{
		___prefix_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_1), (void*)value);
	}

	inline static int32_t get_offset_of_localName_2() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___localName_2)); }
	inline StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * get_localName_2() const { return ___localName_2; }
	inline StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE ** get_address_of_localName_2() { return &___localName_2; }
	inline void set_localName_2(StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * value)
	{
		___localName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_2), (void*)value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___value_3)); }
	inline ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * get_value_3() const { return ___value_3; }
	inline ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}

	inline static int32_t get_offset_of_ns_4() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___ns_4)); }
	inline Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * get_ns_4() const { return ___ns_4; }
	inline Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 ** get_address_of_ns_4() { return &___ns_4; }
	inline void set_ns_4(Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * value)
	{
		___ns_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasValue_5() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___hasValue_5)); }
	inline bool get_hasValue_5() const { return ___hasValue_5; }
	inline bool* get_address_of_hasValue_5() { return &___hasValue_5; }
	inline void set_hasValue_5(bool value)
	{
		___hasValue_5 = value;
	}

	inline static int32_t get_offset_of_canGetAttribute_6() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___canGetAttribute_6)); }
	inline bool get_canGetAttribute_6() const { return ___canGetAttribute_6; }
	inline bool* get_address_of_canGetAttribute_6() { return &___canGetAttribute_6; }
	inline void set_canGetAttribute_6(bool value)
	{
		___canGetAttribute_6 = value;
	}

	inline static int32_t get_offset_of_canMoveToElement_7() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___canMoveToElement_7)); }
	inline bool get_canMoveToElement_7() const { return ___canMoveToElement_7; }
	inline bool* get_address_of_canMoveToElement_7() { return &___canMoveToElement_7; }
	inline void set_canMoveToElement_7(bool value)
	{
		___canMoveToElement_7 = value;
	}

	inline static int32_t get_offset_of_readState_8() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___readState_8)); }
	inline int32_t get_readState_8() const { return ___readState_8; }
	inline int32_t* get_address_of_readState_8() { return &___readState_8; }
	inline void set_readState_8(int32_t value)
	{
		___readState_8 = value;
	}

	inline static int32_t get_offset_of_attributeTextNode_9() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___attributeTextNode_9)); }
	inline XmlAttributeTextNode_tD0D863F095379F50FBB322B76F3159F3E7995C16 * get_attributeTextNode_9() const { return ___attributeTextNode_9; }
	inline XmlAttributeTextNode_tD0D863F095379F50FBB322B76F3159F3E7995C16 ** get_address_of_attributeTextNode_9() { return &___attributeTextNode_9; }
	inline void set_attributeTextNode_9(XmlAttributeTextNode_tD0D863F095379F50FBB322B76F3159F3E7995C16 * value)
	{
		___attributeTextNode_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeTextNode_9), (void*)value);
	}

	inline static int32_t get_offset_of_exitScope_10() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___exitScope_10)); }
	inline bool get_exitScope_10() const { return ___exitScope_10; }
	inline bool* get_address_of_exitScope_10() { return &___exitScope_10; }
	inline void set_exitScope_10(bool value)
	{
		___exitScope_10 = value;
	}

	inline static int32_t get_offset_of_depthDelta_11() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___depthDelta_11)); }
	inline int32_t get_depthDelta_11() const { return ___depthDelta_11; }
	inline int32_t* get_address_of_depthDelta_11() { return &___depthDelta_11; }
	inline void set_depthDelta_11(int32_t value)
	{
		___depthDelta_11 = value;
	}

	inline static int32_t get_offset_of_isAtomicValue_12() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___isAtomicValue_12)); }
	inline bool get_isAtomicValue_12() const { return ___isAtomicValue_12; }
	inline bool* get_address_of_isAtomicValue_12() { return &___isAtomicValue_12; }
	inline void set_isAtomicValue_12(bool value)
	{
		___isAtomicValue_12 = value;
	}

	inline static int32_t get_offset_of_skipValue_13() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___skipValue_13)); }
	inline bool get_skipValue_13() const { return ___skipValue_13; }
	inline bool* get_address_of_skipValue_13() { return &___skipValue_13; }
	inline void set_skipValue_13(bool value)
	{
		___skipValue_13 = value;
	}

	inline static int32_t get_offset_of_qnameType_14() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___qnameType_14)); }
	inline int32_t get_qnameType_14() const { return ___qnameType_14; }
	inline int32_t* get_address_of_qnameType_14() { return &___qnameType_14; }
	inline void set_qnameType_14(int32_t value)
	{
		___qnameType_14 = value;
	}

	inline static int32_t get_offset_of_hasContent_15() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___hasContent_15)); }
	inline bool get_hasContent_15() const { return ___hasContent_15; }
	inline bool* get_address_of_hasContent_15() { return &___hasContent_15; }
	inline void set_hasContent_15(bool value)
	{
		___hasContent_15 = value;
	}

	inline static int32_t get_offset_of_isEmptyElement_16() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___isEmptyElement_16)); }
	inline bool get_isEmptyElement_16() const { return ___isEmptyElement_16; }
	inline bool* get_address_of_isEmptyElement_16() { return &___isEmptyElement_16; }
	inline void set_isEmptyElement_16(bool value)
	{
		___isEmptyElement_16 = value;
	}

	inline static int32_t get_offset_of_quoteChar_17() { return static_cast<int32_t>(offsetof(XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0, ___quoteChar_17)); }
	inline Il2CppChar get_quoteChar_17() const { return ___quoteChar_17; }
	inline Il2CppChar* get_address_of_quoteChar_17() { return &___quoteChar_17; }
	inline void set_quoteChar_17(Il2CppChar value)
	{
		___quoteChar_17 = value;
	}
};


// System.Xml.XmlDictionaryReaderQuotas
struct  XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlDictionaryReaderQuotas::readOnly
	bool ___readOnly_0;
	// System.Int32 System.Xml.XmlDictionaryReaderQuotas::maxStringContentLength
	int32_t ___maxStringContentLength_1;
	// System.Int32 System.Xml.XmlDictionaryReaderQuotas::maxArrayLength
	int32_t ___maxArrayLength_2;
	// System.Int32 System.Xml.XmlDictionaryReaderQuotas::maxDepth
	int32_t ___maxDepth_3;
	// System.Int32 System.Xml.XmlDictionaryReaderQuotas::maxNameTableCharCount
	int32_t ___maxNameTableCharCount_4;
	// System.Int32 System.Xml.XmlDictionaryReaderQuotas::maxBytesPerRead
	int32_t ___maxBytesPerRead_5;
	// System.Xml.XmlDictionaryReaderQuotaTypes System.Xml.XmlDictionaryReaderQuotas::modifiedQuotas
	int32_t ___modifiedQuotas_6;

public:
	inline static int32_t get_offset_of_readOnly_0() { return static_cast<int32_t>(offsetof(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2, ___readOnly_0)); }
	inline bool get_readOnly_0() const { return ___readOnly_0; }
	inline bool* get_address_of_readOnly_0() { return &___readOnly_0; }
	inline void set_readOnly_0(bool value)
	{
		___readOnly_0 = value;
	}

	inline static int32_t get_offset_of_maxStringContentLength_1() { return static_cast<int32_t>(offsetof(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2, ___maxStringContentLength_1)); }
	inline int32_t get_maxStringContentLength_1() const { return ___maxStringContentLength_1; }
	inline int32_t* get_address_of_maxStringContentLength_1() { return &___maxStringContentLength_1; }
	inline void set_maxStringContentLength_1(int32_t value)
	{
		___maxStringContentLength_1 = value;
	}

	inline static int32_t get_offset_of_maxArrayLength_2() { return static_cast<int32_t>(offsetof(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2, ___maxArrayLength_2)); }
	inline int32_t get_maxArrayLength_2() const { return ___maxArrayLength_2; }
	inline int32_t* get_address_of_maxArrayLength_2() { return &___maxArrayLength_2; }
	inline void set_maxArrayLength_2(int32_t value)
	{
		___maxArrayLength_2 = value;
	}

	inline static int32_t get_offset_of_maxDepth_3() { return static_cast<int32_t>(offsetof(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2, ___maxDepth_3)); }
	inline int32_t get_maxDepth_3() const { return ___maxDepth_3; }
	inline int32_t* get_address_of_maxDepth_3() { return &___maxDepth_3; }
	inline void set_maxDepth_3(int32_t value)
	{
		___maxDepth_3 = value;
	}

	inline static int32_t get_offset_of_maxNameTableCharCount_4() { return static_cast<int32_t>(offsetof(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2, ___maxNameTableCharCount_4)); }
	inline int32_t get_maxNameTableCharCount_4() const { return ___maxNameTableCharCount_4; }
	inline int32_t* get_address_of_maxNameTableCharCount_4() { return &___maxNameTableCharCount_4; }
	inline void set_maxNameTableCharCount_4(int32_t value)
	{
		___maxNameTableCharCount_4 = value;
	}

	inline static int32_t get_offset_of_maxBytesPerRead_5() { return static_cast<int32_t>(offsetof(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2, ___maxBytesPerRead_5)); }
	inline int32_t get_maxBytesPerRead_5() const { return ___maxBytesPerRead_5; }
	inline int32_t* get_address_of_maxBytesPerRead_5() { return &___maxBytesPerRead_5; }
	inline void set_maxBytesPerRead_5(int32_t value)
	{
		___maxBytesPerRead_5 = value;
	}

	inline static int32_t get_offset_of_modifiedQuotas_6() { return static_cast<int32_t>(offsetof(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2, ___modifiedQuotas_6)); }
	inline int32_t get_modifiedQuotas_6() const { return ___modifiedQuotas_6; }
	inline int32_t* get_address_of_modifiedQuotas_6() { return &___modifiedQuotas_6; }
	inline void set_modifiedQuotas_6(int32_t value)
	{
		___modifiedQuotas_6 = value;
	}
};

struct XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2_StaticFields
{
public:
	// System.Xml.XmlDictionaryReaderQuotas System.Xml.XmlDictionaryReaderQuotas::defaultQuota
	XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * ___defaultQuota_7;
	// System.Xml.XmlDictionaryReaderQuotas System.Xml.XmlDictionaryReaderQuotas::maxQuota
	XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * ___maxQuota_8;

public:
	inline static int32_t get_offset_of_defaultQuota_7() { return static_cast<int32_t>(offsetof(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2_StaticFields, ___defaultQuota_7)); }
	inline XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * get_defaultQuota_7() const { return ___defaultQuota_7; }
	inline XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 ** get_address_of_defaultQuota_7() { return &___defaultQuota_7; }
	inline void set_defaultQuota_7(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * value)
	{
		___defaultQuota_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultQuota_7), (void*)value);
	}

	inline static int32_t get_offset_of_maxQuota_8() { return static_cast<int32_t>(offsetof(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2_StaticFields, ___maxQuota_8)); }
	inline XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * get_maxQuota_8() const { return ___maxQuota_8; }
	inline XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 ** get_address_of_maxQuota_8() { return &___maxQuota_8; }
	inline void set_maxQuota_8(XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * value)
	{
		___maxQuota_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxQuota_8), (void*)value);
	}
};


// System.Xml.XmlUTF8TextReader
struct  XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D  : public XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269
{
public:
	// System.Xml.PrefixHandle System.Xml.XmlUTF8TextReader::prefix
	PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * ___prefix_40;
	// System.Xml.StringHandle System.Xml.XmlUTF8TextReader::localName
	StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * ___localName_41;
	// System.Int32[] System.Xml.XmlUTF8TextReader::rowOffsets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___rowOffsets_42;
	// System.Xml.OnXmlDictionaryReaderClose System.Xml.XmlUTF8TextReader::onClose
	OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * ___onClose_43;
	// System.Boolean System.Xml.XmlUTF8TextReader::buffered
	bool ___buffered_44;
	// System.Int32 System.Xml.XmlUTF8TextReader::maxBytesPerRead
	int32_t ___maxBytesPerRead_45;

public:
	inline static int32_t get_offset_of_prefix_40() { return static_cast<int32_t>(offsetof(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D, ___prefix_40)); }
	inline PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * get_prefix_40() const { return ___prefix_40; }
	inline PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 ** get_address_of_prefix_40() { return &___prefix_40; }
	inline void set_prefix_40(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * value)
	{
		___prefix_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_40), (void*)value);
	}

	inline static int32_t get_offset_of_localName_41() { return static_cast<int32_t>(offsetof(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D, ___localName_41)); }
	inline StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * get_localName_41() const { return ___localName_41; }
	inline StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE ** get_address_of_localName_41() { return &___localName_41; }
	inline void set_localName_41(StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * value)
	{
		___localName_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_41), (void*)value);
	}

	inline static int32_t get_offset_of_rowOffsets_42() { return static_cast<int32_t>(offsetof(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D, ___rowOffsets_42)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_rowOffsets_42() const { return ___rowOffsets_42; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_rowOffsets_42() { return &___rowOffsets_42; }
	inline void set_rowOffsets_42(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___rowOffsets_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowOffsets_42), (void*)value);
	}

	inline static int32_t get_offset_of_onClose_43() { return static_cast<int32_t>(offsetof(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D, ___onClose_43)); }
	inline OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * get_onClose_43() const { return ___onClose_43; }
	inline OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 ** get_address_of_onClose_43() { return &___onClose_43; }
	inline void set_onClose_43(OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * value)
	{
		___onClose_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onClose_43), (void*)value);
	}

	inline static int32_t get_offset_of_buffered_44() { return static_cast<int32_t>(offsetof(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D, ___buffered_44)); }
	inline bool get_buffered_44() const { return ___buffered_44; }
	inline bool* get_address_of_buffered_44() { return &___buffered_44; }
	inline void set_buffered_44(bool value)
	{
		___buffered_44 = value;
	}

	inline static int32_t get_offset_of_maxBytesPerRead_45() { return static_cast<int32_t>(offsetof(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D, ___maxBytesPerRead_45)); }
	inline int32_t get_maxBytesPerRead_45() const { return ___maxBytesPerRead_45; }
	inline int32_t* get_address_of_maxBytesPerRead_45() { return &___maxBytesPerRead_45; }
	inline void set_maxBytesPerRead_45(int32_t value)
	{
		___maxBytesPerRead_45 = value;
	}
};

struct XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields
{
public:
	// System.Byte[] System.Xml.XmlUTF8TextReader::charType
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___charType_46;

public:
	inline static int32_t get_offset_of_charType_46() { return static_cast<int32_t>(offsetof(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields, ___charType_46)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_charType_46() const { return ___charType_46; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_charType_46() { return &___charType_46; }
	inline void set_charType_46(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___charType_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charType_46), (void*)value);
	}
};


// System.Xml.OnXmlDictionaryReaderClose
struct  OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.XmlBaseReader_XmlAttributeNode
struct  XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D  : public XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0
{
public:

public:
};


// System.Xml.XmlBaseReader_XmlCommentNode
struct  XmlCommentNode_tC7CA5ECB98EC8FCC1AAA805B64B16642892AA2E6  : public XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0
{
public:

public:
};


// System.Xml.XmlBaseReader_XmlDeclarationNode
struct  XmlDeclarationNode_tF18E8BF011A44F0380942A5F3D8B600DA82CF3E5  : public XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0
{
public:

public:
};


// System.Xml.XmlBaseReader_XmlElementNode
struct  XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC  : public XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0
{
public:
	// System.Xml.XmlBaseReader_XmlEndElementNode System.Xml.XmlBaseReader_XmlElementNode::endElementNode
	XmlEndElementNode_tA0D981166CB8CFEEAF6E7197F219D9DC646D136B * ___endElementNode_18;
	// System.Int32 System.Xml.XmlBaseReader_XmlElementNode::bufferOffset
	int32_t ___bufferOffset_19;
	// System.Int32 System.Xml.XmlBaseReader_XmlElementNode::NameOffset
	int32_t ___NameOffset_20;
	// System.Int32 System.Xml.XmlBaseReader_XmlElementNode::NameLength
	int32_t ___NameLength_21;

public:
	inline static int32_t get_offset_of_endElementNode_18() { return static_cast<int32_t>(offsetof(XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC, ___endElementNode_18)); }
	inline XmlEndElementNode_tA0D981166CB8CFEEAF6E7197F219D9DC646D136B * get_endElementNode_18() const { return ___endElementNode_18; }
	inline XmlEndElementNode_tA0D981166CB8CFEEAF6E7197F219D9DC646D136B ** get_address_of_endElementNode_18() { return &___endElementNode_18; }
	inline void set_endElementNode_18(XmlEndElementNode_tA0D981166CB8CFEEAF6E7197F219D9DC646D136B * value)
	{
		___endElementNode_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endElementNode_18), (void*)value);
	}

	inline static int32_t get_offset_of_bufferOffset_19() { return static_cast<int32_t>(offsetof(XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC, ___bufferOffset_19)); }
	inline int32_t get_bufferOffset_19() const { return ___bufferOffset_19; }
	inline int32_t* get_address_of_bufferOffset_19() { return &___bufferOffset_19; }
	inline void set_bufferOffset_19(int32_t value)
	{
		___bufferOffset_19 = value;
	}

	inline static int32_t get_offset_of_NameOffset_20() { return static_cast<int32_t>(offsetof(XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC, ___NameOffset_20)); }
	inline int32_t get_NameOffset_20() const { return ___NameOffset_20; }
	inline int32_t* get_address_of_NameOffset_20() { return &___NameOffset_20; }
	inline void set_NameOffset_20(int32_t value)
	{
		___NameOffset_20 = value;
	}

	inline static int32_t get_offset_of_NameLength_21() { return static_cast<int32_t>(offsetof(XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC, ___NameLength_21)); }
	inline int32_t get_NameLength_21() const { return ___NameLength_21; }
	inline int32_t* get_address_of_NameLength_21() { return &___NameLength_21; }
	inline void set_NameLength_21(int32_t value)
	{
		___NameLength_21 = value;
	}
};


// System.Xml.XmlBaseReader_XmlTextNode
struct  XmlTextNode_t3314BAFDFEA93B41FE7358E828C41A9878B4AE24  : public XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0
{
public:

public:
};


// System.Xml.XmlBaseReader_XmlAtomicTextNode
struct  XmlAtomicTextNode_tDFAE6EC65DE6CD6DB1055BCA114ECADB1FBB851B  : public XmlTextNode_t3314BAFDFEA93B41FE7358E828C41A9878B4AE24
{
public:

public:
};


// System.Xml.XmlBaseReader_XmlCDataNode
struct  XmlCDataNode_t466D5083F8B29DAD8C615C555412026D474EABF4  : public XmlTextNode_t3314BAFDFEA93B41FE7358E828C41A9878B4AE24
{
public:

public:
};


// System.Xml.XmlBaseReader_XmlComplexTextNode
struct  XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C  : public XmlTextNode_t3314BAFDFEA93B41FE7358E828C41A9878B4AE24
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Exception System.Runtime.Serialization.DiagnosticUtility/ExceptionUtility::ThrowHelperError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionUtility_ThrowHelperError_m906DB2E2CEE5A157CE7645974C82E2C3A6122709 (Exception_t * ___e0, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A (String_t* ___name0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.Xml.XmlDictionaryString::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDictionaryString_get_Value_m65600B71F7EAC8E316EA3599AB52ABF0CD1FB464 (XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void System.Xml.XmlDictionaryString/EmptyStringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyStringDictionary__ctor_m66A1C47F82A52592444B71AE4526162805933D58 (EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlDictionaryString::.ctor(System.Xml.IXmlDictionary,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDictionaryString__ctor_m9BCF40B7F85CF43A27E4FDEE576EB948F1398B86 (XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * __this, RuntimeObject* ___dictionary0, String_t* ___value1, int32_t ___key2, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlException(System.Xml.XmlDictionaryReader,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___res1, String_t* ___arg12, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlException(System.Xml.XmlDictionaryReader,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlException_mFA170408D09BD92C2710B3C2DC763B6BA254CE9E (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___res1, String_t* ___arg12, String_t* ___arg23, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlException(System.Xml.XmlDictionaryReader,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlException_mE6F1D231B319C90E412A9BF8FFBEC5094CA40370 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___res1, String_t* ___arg12, String_t* ___arg23, String_t* ___arg34, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.Diagnostics.Application.TD::ReaderQuotaExceededIsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TD_ReaderQuotaExceededIsEnabled_mF5934E0F0CE2E1DA253708203CE798E83AEBEAD6 (const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Diagnostics.Application.TD::ReaderQuotaExceeded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TD_ReaderQuotaExceeded_m72384C9A5635E126CA1453DCE10D89FBED71C200 (String_t* ___param00, const RuntimeMethod* method);
// System.Void System.Xml.XmlException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m3C6F865CCA07051F36F465F1BBE24251906765A9 (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m9C84EE1DB2BE4E43D84B7CC8E7738DF0037070B5 (String_t* ___name0, const RuntimeMethod* method);
// System.String System.Xml.XmlExceptionHelper::GetName(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlExceptionHelper_GetName_mC6F8835B7B56E83176F6880FDB7FD1F81BADD175 (String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method);
// System.String System.Xml.XmlExceptionHelper::GetWhatWasFound(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlExceptionHelper_GetWhatWasFound_mEC6A7A3CBE0C86BB4EA488DB43875096327682C1 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9 (const RuntimeMethod* method);
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5 (int32_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlException(System.Xml.XmlDictionaryReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlException_mE7738229BA17072F87A165664145079FACBAF60A (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___res1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m731FDB27391432D7F14B6769B5D0A3E248803D25 (uint8_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.Xml.XmlBaseReader::GetOpenElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlBaseReader_GetOpenElements_m9FC225ECE59BC567003A00634B3C99139E0674D2 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_mD792ADCB351BBCDFFAB73F8B92EE98DA7BC41328 (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_m026030C6C39449C25EC6FA364AA0A49FB3ADCD9E (UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * __this, bool p0, bool p1, const RuntimeMethod* method);
// System.Xml.XmlException System.Xml.XmlExceptionHelper::CreateEncodingException(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * XmlExceptionHelper_CreateEncodingException_mC87D19A145C345A626F5294F3A93A524CBFCFD6B (String_t* ___value0, Exception_t * ___exception1, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_Flush_mBCC2263805427A473D1446393C098061543CF6A0 (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_Close_m3808C94346878BF050AEBC7E1241BF8521C968CD (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteDeclaration_m730C2B5B4639CA2BB14D3826AA3F8CDF3529FB9C (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteComment_mBDA9ACEDE357D3E84D1B2A74AAF5CD0EE40144FF (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteStartElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteStartElement_m50D0BA8E772451293D3A5CAB9603A26D98B58F68 (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteStartElement(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteStartElement_mC8AD4204EB830F45B243958D6B93234ED303929D (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer3, int32_t ___localNameOffset4, int32_t ___localNameLength5, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteEndStartElement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteEndStartElement_m5B539C7CB9A63EAC2A18E3B4E03FE514B36FFF64 (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, bool ___isEmpty0, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteEndElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteEndElement_mEA5A772E4DD2BA6400AC06F7AB038A3544B2E015 (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteXmlnsAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteXmlnsAttribute_mC0A59079F1921D9210AD3542C457D8F397EDEBE5 (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, String_t* ___prefix0, String_t* ___ns1, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteXmlnsAttribute(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteXmlnsAttribute_m00E4FB82497E88F6C5520C4AA3332CB9D55639FA (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___nsBuffer3, int32_t ___nsOffset4, int32_t ___nsLength5, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteStartAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteStartAttribute_m485A9D39770C2F79B8E15F8E137C0F66B77237EF (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteStartAttribute(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteStartAttribute_m87B3E18C6A693B7A6DA75D5FEF6FC4A04854DD11 (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer3, int32_t ___localNameOffset4, int32_t ___localNameLength5, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteEndAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteEndAttribute_m35CF6C2840542AC2BE200C396346387DD52EFE91 (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteCharEntity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteCharEntity_m4E8D88D934527B08C14E67A0A3F52C080BB42283 (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteEscapedText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteEscapedText_m1EF74F6533A8E6E74CC699CDF54F750E5621B2CE (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteEscapedText(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteEscapedText_m729C83751CF0AD614E659B83523293CA261A500A (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteEscapedText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteEscapedText_m765C86662A3228C67565B3C9553FD5ADAC260006 (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteText_m77657C8E70D247B76590E3345988232A87ED0A26 (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteText(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteText_mD192F877096FE27E45CF33D15B611EA9D1A312DD (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Xml.XmlCanonicalWriter::WriteText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C (XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlConverter::ToChars(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlConverter_ToChars_m76527E4539FA08D5F960F07BB6533A86B638827A (int32_t ___value0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars1, int32_t ___offset2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlConverter::ToChars(System.Int64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlConverter_ToChars_mC4517ABB1158A183F61BD276E13AA8B9A810D3B0 (int64_t ___value0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars1, int32_t ___offset2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlConverter::ToChars(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlConverter_ToChars_m53EC6E9A18A98DBBD73B9BBBDE796B55D3BBFA7F (uint64_t ___value0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___offset2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlConverter::ToChars(System.Single,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlConverter_ToChars_m7C184C40D054A50646F4972B5FC5DA0A9098E8D5 (float ___value0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___offset2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlConverter::ToChars(System.Double,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlConverter_ToChars_mF58DA46065CE4058E30F8C2581EE015187404FF2 (double ___value0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___offset2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlConverter::ToChars(System.Decimal,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlConverter_ToChars_mDE762853FBC05A7BA94BD23B584CB047532B902E (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___offset2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlConverter::ToChars(System.DateTime,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlConverter_ToChars_m974365FC014734B71EF291A2188A8568F76FB2E9 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars1, int32_t ___offset2, const RuntimeMethod* method);
// System.String System.Xml.XmlConverter::ToString(System.Xml.UniqueId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConverter_ToString_m25B2973B69D06ED616F3369234E60A1EF32F1CB9 (UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConverter::ToString(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConverter_ToString_m906C549F578CBD45E34D266D74E7102A5A716FAB (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConverter::ToString(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConverter_ToString_m96A774F789B7B87EDCDFC78DA4A7B4A73341627E (Guid_t  ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlSigningNodeWriter::WriteBase64Text(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteBase64Text_m6DC54A879B8A2AF3CC6825F4ECFCD455EA7887F8 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Text.Base64Encoding System.Xml.XmlConverter::get_Base64Encoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * XmlConverter_get_Base64Encoding_m4D5EEA53C5F298A0D44CA25FA32D7030AEB25EDC (const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Text.Base64Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Base64Encoding_GetChars_mF9732308F8D03D48B4C6CE8E0346FB6EAC117DB0 (Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamNodeWriter::EnsureByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_EnsureByte_mD3180930042141EF7FF43BD8D18734C3CF6AC41E (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamNodeWriter::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteByte_m32DB670957501BAFEA6C841962551EA1624C6CB4 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, uint8_t ___b0, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamNodeWriter::WriteBytes(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteBytes_m9EFB3AE5A9924B8CE29E9F72021D1D36078843AC (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, uint8_t ___b10, uint8_t ___b21, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamNodeWriter::UnsafeWriteUTF8Chars(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_UnsafeWriteUTF8Chars_mCABBF9886CDC5F2014A8841737F60CA31432D0AC (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, const RuntimeMethod* method);
// System.Void System.Text.SurrogateChar::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateChar__ctor_m780D63D9A07E4A0E86714D8B3E935A360C80A4D7 (SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507 * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Char System.Text.SurrogateChar::get_HighChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar SurrogateChar_get_HighChar_mCBA1A2574C2B079EA42EBE514ABD47623D7B78F3 (SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507 * __this, const RuntimeMethod* method);
// System.Char System.Text.SurrogateChar::get_LowChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar SurrogateChar_get_LowChar_m9EEFCCCE9AAC11909DEF5391F1E6DEE5CE411A7A (SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507 * __this, const RuntimeMethod* method);
// System.Byte[] System.Xml.XmlStreamNodeWriter::GetBuffer(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, int32_t ___count0, int32_t* ___offset1, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamNodeWriter::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B (const RuntimeMethod* method);
// System.Int32 System.Xml.XmlStreamNodeWriter::UnsafeGetUTF8Chars(System.Char*,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlStreamNodeWriter_UnsafeGetUTF8Chars_m033CB5E7248442B5683EA55EFC8ED7A6B1771847 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer2, int32_t ___offset3, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamNodeWriter::WriteUTF8Chars(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars0, int32_t ___charOffset1, int32_t ___charCount2, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_BigEndianUnicode_m6CC17642A36943FE038F54729446D7E30D582BDD (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamNodeWriter::WriteUTF8Chars(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteUTF8Chars_m861A301DA9E067C3C046271EC467332ECDF07D24 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteStartComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteStartComment_m26E3B0B7536B0B07EC5661450FB550796818F900 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteEndComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteEndComment_m06FEDDB5ED4318D3F1EC87BE5634E998023AE3BF (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamNodeWriter::WriteByte(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WritePrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WritePrefix_m363BEFA8269E39C9C1BEE7CEE9E25F22785D311B (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___prefix0, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteLocalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteLocalName_mC1931EE08E299931FD3211F99610123E8DA45631 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___localName0, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WritePrefix(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WritePrefix_m00CEC3BA36FCE465F215AEAEEF75B730C623132C (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteLocalName(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteLocalName_mD6C461567103CD31CA58B51BD3232677BE4A7F3D (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer0, int32_t ___localNameOffset1, int32_t ___localNameLength2, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamNodeWriter::WriteBytes(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteBytes_mCA8E9330098BA27729D6126A98FBC8E82D56B1E7 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, Il2CppChar ___ch10, Il2CppChar ___ch21, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteStartXmlnsAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteStartXmlnsAttribute_m9039097F31999620B44BED7DB647446D49A6DF1A (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamNodeWriter::WriteUTF8Char(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteUTF8Char_m2D9E64F6EF412CBDC288D449E5D24CEC5F9946AA (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::UnsafeWriteEscapedText(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_UnsafeWriteEscapedText_m9E4C3542F35A3F08D914F434B8051A553E41539F (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method);
// System.Byte[] System.Xml.XmlUTF8NodeWriter::GetCharEntityBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* XmlUTF8NodeWriter_GetCharEntityBuffer_mC86D9AE1D2E03B9C0F8B8CB8250A58EB7C5EC92A (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlUTF8NodeWriter::ToBase16(System.Byte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8NodeWriter_ToBase16_m3BB4B78DA0E3C160A705A4C0FB1814B25FFE6468 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars0, int32_t ___offset1, uint32_t ___value2, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteLessThanCharEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteLessThanCharEntity_m2B244D6CC22F4862F0192669731DE0B35CAA10B0 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteGreaterThanCharEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteGreaterThanCharEntity_m8AD4AD059DBBD0C8359474F3B2076D152BA0B782 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteAmpersandCharEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteAmpersandCharEntity_m4DB776AF23C017EC2BDB146EF741B57598D4ABDF (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteApostropheCharEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteApostropheCharEntity_m210A93AD572096B2EA953ABAD600F71FDAD3A19B (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteQuoteCharEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteQuoteCharEntity_mD3888FE9E0CD27A410C360DF55F2F4C1D6DE2C3F (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::WriteHexCharEntity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteHexCharEntity_m15AFE743169DEACC0777F0A18C54B4EC92B6B7E1 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Boolean System.Xml.UniqueId::get_IsGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniqueId_get_IsGuid_m42F929E1369AC17191B16055A04116CADAA73251 (UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.UniqueId::get_CharArrayLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UniqueId_get_CharArrayLength_m2F3E2C5B4F8416525F5F790203A964F0BC9E226A (UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * __this, const RuntimeMethod* method);
// System.Char[] System.Xml.XmlUTF8NodeWriter::GetCharBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* XmlUTF8NodeWriter_GetCharBuffer_m90CA523ACA602D577B1951E302948813D59A53F9 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, int32_t ___charCount0, const RuntimeMethod* method);
// System.Int32 System.Xml.UniqueId::ToCharArray(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UniqueId_ToCharArray_mA54CC947FC6658E6516535BF5BC328E5F227DF0F (UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars0, int32_t ___offset1, const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5 (Guid_t * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8NodeWriter::InternalWriteBase64Text(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_InternalWriteBase64Text_mB8AADFB26D6E521E83C53144BF69496B185356D2 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mC300716D816BD9BB575D540C1417D0152BB059ED (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * p0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseReader__ctor_m599F29ECD263FF806E3124C63E1ABC9D28D116AC (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Xml.XmlBufferReader System.Xml.XmlBaseReader::get_BufferReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Void System.Xml.PrefixHandle::.ctor(System.Xml.XmlBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrefixHandle__ctor_mBCC5029DB6C3DD2C3F12BFC1E7036A2CCAF68AF0 (PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * __this, XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * ___bufferReader0, const RuntimeMethod* method);
// System.Void System.Xml.StringHandle::.ctor(System.Xml.XmlBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringHandle__ctor_mB15B96EB0897C852B3AED43D1177D311FAE771A6 (StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * __this, XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * ___bufferReader0, const RuntimeMethod* method);
// System.Exception System.Runtime.Serialization.DiagnosticUtility/ExceptionUtility::ThrowHelperArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionUtility_ThrowHelperArgumentNull_m92E997E346B3768C4ADA9231CEB35BF503C0204C (String_t* ___arg0, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::MoveToInitial(System.Xml.XmlDictionaryReaderQuotas,System.Xml.OnXmlDictionaryReaderClose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_MoveToInitial_m96A60475EAB096562EED7F1FB7CF61C73360CD9C (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * ___quotas0, OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * ___onClose1, const RuntimeMethod* method);
// System.Void System.Xml.EncodingStreamWrapper::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodingStreamWrapper__ctor_m9221FD590E4AC0AD1893398EE4D33ACEA97A2E8D (EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding1, const RuntimeMethod* method);
// System.Void System.Xml.XmlBufferReader::SetBuffer(System.IO.Stream,System.Xml.IXmlDictionary,System.Xml.XmlBinaryReaderSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBufferReader_SetBuffer_m5439B338B5CA1B601F66AE2B0C8262499E0A357C (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, RuntimeObject* ___dictionary1, XmlBinaryReaderSession_t8DAB759A1EC252C96B05AE26AAC29C85358C4D60 * ___session2, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader::MoveToInitial(System.Xml.XmlDictionaryReaderQuotas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseReader_MoveToInitial_m77E06CF0CB82B42106CFBBE3AC47AA0F6D189375 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * ___quotas0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlDictionaryReaderQuotas::get_MaxBytesPerRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlDictionaryReaderQuotas_get_MaxBytesPerRead_m3990F214AE6B58B7E6AFB9C3A12B7C83866A4F4A (XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseReader_Close_m68F0A95CE2A545033A7BE7573A7567A843F24CB8 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Void System.Xml.OnXmlDictionaryReaderClose::Invoke(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnXmlDictionaryReaderClose_Invoke_m99E166C0D4716B05480231A81FF4D44662617BC4 (OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * __this, XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Fx::IsFatal(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fx_IsFatal_m735CE6CF279A43E6EEF1AF70936E519FF0E9C949 (Exception_t * p0, const RuntimeMethod* method);
// System.Exception System.Runtime.Serialization.DiagnosticUtility/ExceptionUtility::ThrowHelperCallback(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ExceptionUtility_ThrowHelperCallback_m84C6B9F2F155631EFAAF0001C5F9B68363B1DDCD (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.Xml.XmlBufferReader::SkipByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlBufferReader::get_EndOfFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlBufferReader_get_EndOfFile_mC4BD439D86BB6F26A5E9CCAFA30D4D24A1FE144E (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, const RuntimeMethod* method);
// System.Byte System.Xml.XmlBufferReader::GetByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655 (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::BufferElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_BufferElement_m0FDB082B7B2909342770933644526DF6138D8C3A (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Byte[] System.Xml.XmlBufferReader::GetBuffer(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* XmlBufferReader_GetBuffer_mA8D442CFFAA68D23D6A6C86B1953D35269ADAFE7 (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, int32_t ___count0, int32_t* ___offset1, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowProcessingInstructionNotSupported(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowProcessingInstructionNotSupported_m70855EA2441FB2BA32CF3DAD46F912D91BBD10FC (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlNode System.Xml.XmlBaseReader::get_Node()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * XmlBaseReader_get_Node_m21A34AB19CD14EA292A34871BC6675DBF4E7718B (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Xml.ReadState System.Xml.XmlBaseReader/XmlNode::get_ReadState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNode_get_ReadState_m55209695C2C5D688B1FEE602F1ED3F5B37F38E0F (XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowDeclarationNotFirst(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowDeclarationNotFirst_mD72489AE6AAAB1F5895C5E53F7B13239271FE69A (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method);
// System.Void System.Xml.XmlBufferReader::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlBufferReader::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96 (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::SkipWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_SkipWhitespace_m06EE0DC2495B4BDBEC80B2AC96690512FF4B96C4 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadAttributes_mB36A035762B54FB2299D7D8F96A8F2A7A5AB0489 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Byte System.Xml.XmlBufferReader::GetByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t XmlBufferReader_GetByte_m8E9C808727C7D612A20E31CF45E83A284C6A1F76 (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowTokenExpected(System.Xml.XmlDictionaryReader,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowTokenExpected_mA379717CE09073B49DC624B5B2474EAF7AAAB4A2 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___expected1, String_t* ___found2, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlDeclarationNode System.Xml.XmlBaseReader::MoveToDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlDeclarationNode_tF18E8BF011A44F0380942A5F3D8B600DA82CF3E5 * XmlBaseReader_MoveToDeclaration_mF423DC14FEDA3FCC37AE2741C7B931A820DC30D4 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Xml.StringHandle System.Xml.XmlBaseReader/XmlNode::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * XmlNode_get_LocalName_m8F65CBD2DC9347E3AE70EC78022AF0A09F404EE6 (XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * __this, const RuntimeMethod* method);
// System.Void System.Xml.StringHandle::SetValue(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringHandle_SetValue_mC23E0E0B06D2EC53FBAB74A28010B603690AC778 (StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method);
// System.Xml.ValueHandle System.Xml.XmlBaseReader/XmlNode::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F (XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * __this, const RuntimeMethod* method);
// System.Void System.Xml.ValueHandle::SetValue(System.Xml.ValueHandleType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueHandle_SetValue_mBD180573C3C14B9AE2F42D2C2E94910BB4D9D433 (ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * __this, int32_t ___type0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_VerifyNCName_mF62837DD0C6C41324F0F42C643E7B72E0AAEF252 (String_t* p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlException(System.Xml.XmlDictionaryReader,System.Xml.XmlException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * ___exception1, const RuntimeMethod* method);
// System.Byte[] System.Xml.XmlBufferReader::GetBuffer(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* XmlBufferReader_GetBuffer_m5986B41D7559DCE5C78D27042F0F62D844E30747 (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, int32_t* ___offset0, int32_t* ___offsetMax1, const RuntimeMethod* method);
// System.Xml.PrefixHandleType System.Xml.PrefixHandle::GetAlphaPrefix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrefixHandle_GetAlphaPrefix_m2A482C2E512A3AF0F65F8F8E85AFE79F50B67866 (int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Xml.PrefixHandle::SetValue(System.Xml.PrefixHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrefixHandle_SetValue_mDA88E144A806F4564F7D600CFAA6435DC4E2783E (PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void System.Xml.PrefixHandle::SetValue(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrefixHandle_SetValue_m9A8694CF93E9E76ADF778920D35565AF544762C7 (PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.Xml.PrefixHandle::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PrefixHandle_GetString_mEB0712B21E19DC06819F5198DB74DAFC6F12B0F6 (PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::VerifyNCName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_VerifyNCName_m0B7F7B052979DC5C25D2F26D47CF353CC727D28B (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, String_t* ___s0, const RuntimeMethod* method);
// System.String System.Xml.StringHandle::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringHandle_GetString_mAB49757C479587CCC59D51FEB727CAE0C2566053 (StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadQualifiedName(System.Xml.PrefixHandle,System.Xml.StringHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadQualifiedName_mAD168604D705E1A35EC24B6DDEA5C7B7523A739B (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * ___prefix0, StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * ___localName1, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowTokenExpected(System.Xml.XmlDictionaryReader,System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowTokenExpected_m58AA20C98DF41754931AB76334B48A47C2660099 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___expected1, Il2CppChar ___found2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlUTF8TextReader::ReadAttributeText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_ReadAttributeText_m1DB2D2F9934FC782E92F019A60C0FA6E95CB634E (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___offsetMax2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlUTF8TextReader::ReadCharRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_ReadCharRef_m4D380E8337F9A27B0DE6F1CE554717039D5B58E5 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadNonFFFE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadNonFFFE_m8ACBBF0DE024B7CFB4CFD6ED72DE1CFCA1DAFC45 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.PrefixHandle::get_IsXmlns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrefixHandle_get_IsXmlns_mD2F891E4055BEFEF1D53E5E806C8145B21D922B1 (PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * __this, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/Namespace System.Xml.XmlBaseReader::AddNamespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * XmlBaseReader_AddNamespace_m0904CB720A41564313B8934E2D016DC7BEB2EEC8 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Xml.PrefixHandle System.Xml.XmlBaseReader/Namespace::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * Namespace_get_Prefix_mA6B31B1313877F46D610CBF40384B3C4308F5A02 (Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * __this, const RuntimeMethod* method);
// System.Void System.Xml.StringHandle::ToPrefixHandle(System.Xml.PrefixHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringHandle_ToPrefixHandle_mE13F2F7FCAA46D90B9D9652A83AD4FEDCE0C254B (StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * __this, PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * ___prefix0, const RuntimeMethod* method);
// System.Xml.StringHandle System.Xml.XmlBaseReader/Namespace::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * Namespace_get_Uri_m991C708A6252A953E6809437D96B6D60EB4AA7BB (Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * __this, const RuntimeMethod* method);
// System.Void System.Xml.StringHandle::SetValue(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringHandle_SetValue_m10C2CB2F21811299E386F6A479ACCF12BAC51FEC (StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * __this, int32_t ___offset0, int32_t ___length1, bool ___escaped2, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlAttributeNode System.Xml.XmlBaseReader::AddXmlnsAttribute(System.Xml.XmlBaseReader/Namespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * XmlBaseReader_AddXmlnsAttribute_m797BFF49EE87CC74D04D3345FADB1FB372F07A02 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * ___ns0, const RuntimeMethod* method);
// System.Boolean System.Xml.PrefixHandle::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrefixHandle_get_IsEmpty_m9B927FB684319C782618D0A23B4C247679F733B4 (PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.StringHandle::get_IsXmlns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringHandle_get_IsXmlns_m2E73E5353A3142B5B04A9A935485438CFDC89DBF (StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.PrefixHandle::get_IsXml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrefixHandle_get_IsXml_mB3C2EFA66B9EE64BD4376444BD6C086462DABDD2 (PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * __this, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlAttributeNode System.Xml.XmlBaseReader::AddXmlAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * XmlBaseReader_AddXmlAttribute_m3BDF4F3535071A74BAF767F2B7350696A2AD7A84 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Xml.PrefixHandle System.Xml.XmlBaseReader/XmlNode::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * XmlNode_get_Prefix_m81A3FDD59EF9D19EEF24CF6BF9D8C38A3CD9D7C6 (XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * __this, const RuntimeMethod* method);
// System.Void System.Xml.PrefixHandle::SetValue(System.Xml.PrefixHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrefixHandle_SetValue_mFAA1A09AE3F31598A9E425CCDB64D7DA63947418 (PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * __this, PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * ___prefix0, const RuntimeMethod* method);
// System.Void System.Xml.StringHandle::SetValue(System.Xml.StringHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringHandle_SetValue_m4436A82922E423449D923D7E7F3D58B745E925C5 (StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * __this, StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader::FixXmlAttribute(System.Xml.XmlBaseReader/XmlAttributeNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseReader_FixXmlAttribute_mC0BF3C899E5051AB7CB8E2C63CA02CDD02F8886D (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * ___attributeNode0, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlAttributeNode System.Xml.XmlBaseReader::AddAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * XmlBaseReader_AddAttribute_m63B073F4A933D2FBDA32014F992C4F757F40D37C (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader/XmlNode::set_QuoteChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNode_set_QuoteChar_m4A60122B239CB60FA45CA38A3866D2C26C798994 (XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowMaxBytesPerReadExceeded(System.Xml.XmlDictionaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowMaxBytesPerReadExceeded_m07A7EB8649AAE9D1CBEA7029E172A0D242C95203 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, int32_t ___maxBytesPerRead1, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader::ProcessAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseReader_ProcessAttributes_mA6657B4A79BEE52710B97BDA73DABF32BCA1A29A (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Byte[] System.Xml.XmlBufferReader::GetBuffer(System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* XmlBufferReader_GetBuffer_m9D1A4867D610CEFFA9E5587971078A7EAA27617F (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, int32_t ___count0, int32_t* ___offset1, int32_t* ___offsetMax2, const RuntimeMethod* method);
// System.Void System.Xml.XmlBufferReader::set_Offset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBufferReader_set_Offset_m90EE3B3D9D316FB0A7BE17ADF084337DB5237E84 (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlElementNode System.Xml.XmlBaseReader::EnterScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * XmlBaseReader_EnterScope_m6D18733206613975F2C966D86ED7FAA91C6F8318 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/Namespace System.Xml.XmlBaseReader::LookupNamespace(System.Xml.PrefixHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * XmlBaseReader_LookupNamespace_m2AB9E6BCCA637593764C150E9AEB3859AE8B574D (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * ___prefix0, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader/XmlNode::set_Namespace(System.Xml.XmlBaseReader/Namespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNode_set_Namespace_m315B5CFCD8F3DBB8F5FCCAE15E0BB492A26ACFD4 (XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * __this, Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader/XmlNode::set_IsEmptyElement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNode_set_IsEmptyElement_mB478E42C64A4E03F62B26E1307F5CCCD861DA33A (XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader/XmlNode::set_ExitScope(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNode_set_ExitScope_m944973AA27EE9BEFEBEE45E8049A1E295ECAD3E4 (XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader/XmlElementNode::set_BufferOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementNode_set_BufferOffset_m0C90158F9DEB590C1CCDB720C8E1ECDF55781FBE (XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlElementNode System.Xml.XmlBaseReader::get_ElementNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * XmlBaseReader_get_ElementNode_mE5701AD9967C04183F03AE57E3D920F2A489A1E2 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowTagMismatch(System.Xml.XmlDictionaryReader,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowTagMismatch_m84B14036AC27C158CF152BA4AA8BB3F0B32F77C2 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___expectedPrefix1, String_t* ___expectedLocalName2, String_t* ___foundPrefix3, String_t* ___foundLocalName4, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader::MoveToEndElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseReader_MoveToEndElement_m9E4C74CC1A709E798AEEB301ED30548211293577 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowInvalidXml(System.Xml.XmlDictionaryReader,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowInvalidXml_m06A54081D6D97EC5A1A11932866FBF77C95D81DB (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, uint8_t ___b1, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlCommentNode System.Xml.XmlBaseReader::MoveToComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlCommentNode_tC7CA5ECB98EC8FCC1AAA805B64B16642892AA2E6 * XmlBaseReader_MoveToComment_m9688C5F541019B6F7ADA7D716489EB28C76767B8 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlCDataNode System.Xml.XmlBaseReader::MoveToCData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlCDataNode_t466D5083F8B29DAD8C615C555412026D474EABF4 * XmlBaseReader_MoveToCData_m0A14AE1B7FAD3C6ED344BFA9F7D027F7AAB56955 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlBufferReader::GetCharEntity(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlBufferReader_GetCharEntity_mA034DB7F9D5E325803F279F8FC0E869D55EB7E6E (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlUTF8TextReader::ReadWhitespace(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_ReadWhitespace_m1FE2584E656A5424C9AAADA8562CEDCE8A38D7D8 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___offsetMax2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlUTF8TextReader::BreakText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_BreakText_m48AB2448C20427046BE92A4C0789EDB747B249D6 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlTextNode System.Xml.XmlBaseReader::MoveToWhitespaceText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlTextNode_t3314BAFDFEA93B41FE7358E828C41A9878B4AE24 * XmlBaseReader_MoveToWhitespaceText_m6AB1EB3A9D83763C7F33CF3C7B40844E739B7043 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlUTF8TextReader::IsNextCharacterNonFFFE(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlUTF8TextReader_IsNextCharacterNonFFFE_mC05420DC9329043CA85604ACA930AC187937D1BC (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlUTF8TextReader::ReadTextAndWatchForInvalidCharacters(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_ReadTextAndWatchForInvalidCharacters_mB2B789022E7B9393EC347A3D232D1343D9EA6996 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___offsetMax2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlUTF8TextReader::ReadText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_ReadText_m4394883B9766C51A292C40F19C7E84575DCD2AAF (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___offsetMax2, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlAtomicTextNode System.Xml.XmlBaseReader::MoveToAtomicText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAtomicTextNode_tDFAE6EC65DE6CD6DB1055BCA114ECADB1FBB851B * XmlBaseReader_MoveToAtomicText_m95FCDE52C46C7C532D0DB28B95F098B3447A50D7 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Xml.XmlBaseReader/XmlComplexTextNode System.Xml.XmlBaseReader::MoveToComplexText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C * XmlBaseReader_MoveToComplexText_m200EC0074EBD7C688C48366D490E5D592DE7E9D2 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Void System.Xml.ValueHandle::SetCharValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueHandle_SetCharValue_mFF3D88ACC743B673DC9C147330837F918E8D3964 (ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlBaseReader/XmlNode::get_CanMoveToElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNode_get_CanMoveToElement_m5BD2F6D1A53C77B1EF67DF403CA4244BB16F003D (XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader::SignNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseReader_SignNode_m1B1064DCA5A9DF2522180C4B85D0775DE0B750C8 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlBaseReader/XmlNode::get_ExitScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNode_get_ExitScope_m70DFD7A674920FE1FF74051CD2176EBE9F8E12C6 (XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader::ExitScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseReader_ExitScope_mB436D2A9EDA5D5B275CB434CDAA17A338A5639AF (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlBaseReader/XmlElementNode::get_BufferOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlElementNode_get_BufferOffset_mE696638CEFB53B77455C6215183B411D15154FC6 (XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlBufferReader::SetWindow(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBufferReader_SetWindow_mC2100C81DE8AC2E0829EBD5A3B34858740DC38A0 (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, int32_t ___windowOffset0, int32_t ___windowLength1, const RuntimeMethod* method);
// System.Void System.Xml.XmlBaseReader::MoveToEndOfFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseReader_MoveToEndOfFile_mBFDD9ECA9A75C6BC9DF3A5EF6868DB8D7BBEFB57 (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadEndElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadEndElement_mA1FB87F033F0D0AA2DD7A0BCED94486CA59D9DDD (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadComment_m73271FCC6C5C690D08A98A386588FFB327DE6B1E (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlBaseReader::get_OutsideRootElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlBaseReader_get_OutsideRootElement_mEC16D849DC814CE587EF4C5FCCF98EC6FEB47BAF (XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadCData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadCData_m0E556A79ABBD08477229BC620F97E7A593678D9C (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadDeclaration_m29F7BF6CF24F8A868E1051D761954AE3DF49D0DF (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadStartElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadStartElement_m49BFEE7E3B734207678ADC44FEFF5BB16426A855 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadWhitespace_m5EF0E924D3F7720339504466B231BA8D9A2B30A1 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlExceptionHelper::ThrowInvalidRootData(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowInvalidRootData_m0572DE2D5BF719BFAABEF604B7D9AC3D731DABAC (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadText_m7228B80DD02629A4D5B1D5C6A1557EF501DCD248 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, bool ___hasLeadingByteOf0xEF0, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::ReadEscapedText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadEscapedText_m3A69CCA8C83C78AF4C318285B7BD3AA5876DB56D (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlUTF8TextReader::GetPosition(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_GetPosition_mD809A62151A577738440B7A2CCE1BDCACBDBCEF1 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, int32_t* ___row0, int32_t* ___column1, const RuntimeMethod* method);
// System.Int32[] System.Xml.XmlBufferReader::GetRows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* XmlBufferReader_GetRows_m1277341CD79808CC7916D55C47AEBFDF36009AE6 (XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlDictionaryString::.ctor(System.Xml.IXmlDictionary,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDictionaryString__ctor_m9BCF40B7F85CF43A27E4FDEE576EB948F1398B86 (XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * __this, RuntimeObject* ___dictionary0, String_t* ___value1, int32_t ___key2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDictionaryString__ctor_m9BCF40B7F85CF43A27E4FDEE576EB948F1398B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralF18BFB74E613AFB11F36BDD80CF05CD5DFAD98D6, /*hidden argument*/NULL);
		Exception_t * L_2 = ExceptionUtility_ThrowHelperError_m906DB2E2CEE5A157CE7645974C82E2C3A6122709(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlDictionaryString__ctor_m9BCF40B7F85CF43A27E4FDEE576EB948F1398B86_RuntimeMethod_var);
	}

IL_0019:
	{
		String_t* L_3 = ___value1;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_4 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_4, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		Exception_t * L_5 = ExceptionUtility_ThrowHelperError_m906DB2E2CEE5A157CE7645974C82E2C3A6122709(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, XmlDictionaryString__ctor_m9BCF40B7F85CF43A27E4FDEE576EB948F1398B86_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_6 = ___key2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_7 = ___key2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)536870911))))
		{
			goto IL_006e;
		}
	}

IL_0038:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		int32_t L_10 = 0;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_9;
		int32_t L_13 = ((int32_t)536870911);
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		String_t* L_15 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteral5F8304770B6C7CF67F752A9A04C0B5BAED40917E, L_12, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_16 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_16, _stringLiteralA62F2225BF70BFACCBC7F1EF2A397836717377DE, L_15, /*hidden argument*/NULL);
		Exception_t * L_17 = ExceptionUtility_ThrowHelperError_m906DB2E2CEE5A157CE7645974C82E2C3A6122709(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, XmlDictionaryString__ctor_m9BCF40B7F85CF43A27E4FDEE576EB948F1398B86_RuntimeMethod_var);
	}

IL_006e:
	{
		RuntimeObject* L_18 = ___dictionary0;
		__this->set_dictionary_0(L_18);
		String_t* L_19 = ___value1;
		__this->set_value_1(L_19);
		int32_t L_20 = ___key2;
		__this->set_key_2(L_20);
		return;
	}
}
// System.String System.Xml.XmlDictionaryString::GetString(System.Xml.XmlDictionaryString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDictionaryString_GetString_mC09407F6671061095D4384145A82A2F6FF100DE7 (XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * ___s0, const RuntimeMethod* method)
{
	{
		XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * L_0 = ___s0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * L_1 = ___s0;
		NullCheck(L_1);
		String_t* L_2 = XmlDictionaryString_get_Value_m65600B71F7EAC8E316EA3599AB52ABF0CD1FB464(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Xml.IXmlDictionary System.Xml.XmlDictionaryString::get_Dictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDictionaryString_get_Dictionary_m53F05539E86B4CC1099B1D4E53DA921BB7C1FF3A (XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_dictionary_0();
		return L_0;
	}
}
// System.Int32 System.Xml.XmlDictionaryString::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlDictionaryString_get_Key_mC9C5CD73ADEDDD3BC4E32A5C063F2E012F2274A8 (XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_key_2();
		return L_0;
	}
}
// System.String System.Xml.XmlDictionaryString::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDictionaryString_get_Value_m65600B71F7EAC8E316EA3599AB52ABF0CD1FB464 (XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_1();
		return L_0;
	}
}
// System.Byte[] System.Xml.XmlDictionaryString::ToUTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* XmlDictionaryString_ToUTF8_mD54FD1A407CD5560F29F9DBE85440B5984E3549E (XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_buffer_3();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_1 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_2 = __this->get_value_1();
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		__this->set_buffer_3(L_3);
	}

IL_001e:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_buffer_3();
		return L_4;
	}
}
// System.String System.Xml.XmlDictionaryString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDictionaryString_ToString_m54E41C686D421F33D41B80C60AC006F28D3255D0 (XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_1();
		return L_0;
	}
}
// System.Void System.Xml.XmlDictionaryString::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDictionaryString__cctor_m86B4E5EC62AC9B5B4FA3B1C76C16194B7EDE4243 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDictionaryString__cctor_m86B4E5EC62AC9B5B4FA3B1C76C16194B7EDE4243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C * L_0 = (EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C *)il2cpp_codegen_object_new(EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C_il2cpp_TypeInfo_var);
		EmptyStringDictionary__ctor_m66A1C47F82A52592444B71AE4526162805933D58(L_0, /*hidden argument*/NULL);
		((XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20_StaticFields*)il2cpp_codegen_static_fields_for(XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20_il2cpp_TypeInfo_var))->set_emptyStringDictionary_4(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlDictionaryString_EmptyStringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyStringDictionary__ctor_m66A1C47F82A52592444B71AE4526162805933D58 (EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EmptyStringDictionary__ctor_m66A1C47F82A52592444B71AE4526162805933D58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * L_1 = (XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 *)il2cpp_codegen_object_new(XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20_il2cpp_TypeInfo_var);
		XmlDictionaryString__ctor_m9BCF40B7F85CF43A27E4FDEE576EB948F1398B86(L_1, __this, L_0, 0, /*hidden argument*/NULL);
		__this->set_empty_0(L_1);
		return;
	}
}
// System.Boolean System.Xml.XmlDictionaryString_EmptyStringDictionary::TryLookup(System.Int32,System.Xml.XmlDictionaryString&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EmptyStringDictionary_TryLookup_mE895A3069BE9A267B7B6B9D1C4727A4576A4615B (EmptyStringDictionary_tDEC23CAB918F9226DB7331F03AA7CFB1CA94E50C * __this, int32_t ___key0, XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 ** ___result1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 ** L_1 = ___result1;
		XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 * L_2 = __this->get_empty_0();
		*((RuntimeObject **)L_1) = (RuntimeObject *)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)L_2);
		return (bool)1;
	}

IL_000d:
	{
		XmlDictionaryString_t74F5C761A6002EDBA97CFDDFFB289469B7FEBA20 ** L_3 = ___result1;
		*((RuntimeObject **)L_3) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlException(System.Xml.XmlDictionaryReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlException_mE7738229BA17072F87A165664145079FACBAF60A (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___res1, const RuntimeMethod* method)
{
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		String_t* L_1 = ___res1;
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlException(System.Xml.XmlDictionaryReader,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___res1, String_t* ___arg12, const RuntimeMethod* method)
{
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		String_t* L_1 = ___res1;
		String_t* L_2 = ___arg12;
		XmlExceptionHelper_ThrowXmlException_mFA170408D09BD92C2710B3C2DC763B6BA254CE9E(L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlException(System.Xml.XmlDictionaryReader,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlException_mFA170408D09BD92C2710B3C2DC763B6BA254CE9E (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___res1, String_t* ___arg12, String_t* ___arg23, const RuntimeMethod* method)
{
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		String_t* L_1 = ___res1;
		String_t* L_2 = ___arg12;
		String_t* L_3 = ___arg23;
		XmlExceptionHelper_ThrowXmlException_mE6F1D231B319C90E412A9BF8FFBEC5094CA40370(L_0, L_1, L_2, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlException(System.Xml.XmlDictionaryReader,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlException_mE6F1D231B319C90E412A9BF8FFBEC5094CA40370 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___res1, String_t* ___arg12, String_t* ___arg23, String_t* ___arg34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowXmlException_mE6F1D231B319C90E412A9BF8FFBEC5094CA40370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		String_t* L_0 = ___res1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___arg12;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		String_t* L_5 = ___arg23;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		String_t* L_7 = ___arg34;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		String_t* L_8 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(L_0, L_6, /*hidden argument*/NULL);
		V_0 = L_8;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_9 = ___reader0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var));
		RuntimeObject* L_10 = V_1;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject* L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var, L_11);
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_13 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_14;
		RuntimeObject* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var, L_16);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_19);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_15;
		RuntimeObject* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var, L_21);
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_24);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_24);
		String_t* L_25 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteralFBB02607344E41E7E04C758D3B596362E62C47F5, L_20, /*hidden argument*/NULL);
		String_t* L_26 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_13, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
	}

IL_0064:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TD_tA71E6C2E457FC0E0786A777FB5E7A09CE049A125_il2cpp_TypeInfo_var);
		bool L_27 = TD_ReaderQuotaExceededIsEnabled_mF5934E0F0CE2E1DA253708203CE798E83AEBEAD6(/*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TD_tA71E6C2E457FC0E0786A777FB5E7A09CE049A125_il2cpp_TypeInfo_var);
		TD_ReaderQuotaExceeded_m72384C9A5635E126CA1453DCE10D89FBED71C200(L_28, /*hidden argument*/NULL);
	}

IL_0071:
	{
		String_t* L_29 = V_0;
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_30 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_m3C6F865CCA07051F36F465F1BBE24251906765A9(L_30, L_29, /*hidden argument*/NULL);
		Exception_t * L_31 = ExceptionUtility_ThrowHelperError_m906DB2E2CEE5A157CE7645974C82E2C3A6122709(L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, NULL, XmlExceptionHelper_ThrowXmlException_mE6F1D231B319C90E412A9BF8FFBEC5094CA40370_RuntimeMethod_var);
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlException(System.Xml.XmlDictionaryReader,System.Xml.XmlException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * ___exception1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_0 = ___exception1;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_0);
		V_0 = L_1;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_2 = ___reader0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_6 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var, L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_8;
		RuntimeObject* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_tD6D8818DFB22D29FC2397C76BA6BFFF54604284A_il2cpp_TypeInfo_var, L_14);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		String_t* L_18 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteralFBB02607344E41E7E04C758D3B596362E62C47F5, L_13, /*hidden argument*/NULL);
		String_t* L_19 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_6, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_0051:
	{
		String_t* L_20 = V_0;
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_21 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_m3C6F865CCA07051F36F465F1BBE24251906765A9(L_21, L_20, /*hidden argument*/NULL);
		Exception_t * L_22 = ExceptionUtility_ThrowHelperError_m906DB2E2CEE5A157CE7645974C82E2C3A6122709(L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95_RuntimeMethod_var);
	}
}
// System.String System.Xml.XmlExceptionHelper::GetName(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlExceptionHelper_GetName_mC6F8835B7B56E83176F6880FDB7FD1F81BADD175 (String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_GetName_mC6F8835B7B56E83176F6880FDB7FD1F81BADD175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___prefix0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_2 = ___localName1;
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___prefix0;
		String_t* L_4 = ___localName1;
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_3, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Xml.XmlExceptionHelper::GetWhatWasFound(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlExceptionHelper_GetWhatWasFound_mEC6A7A3CBE0C86BB4EA488DB43875096327682C1 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_GetWhatWasFound_mEC6A7A3CBE0C86BB4EA488DB43875096327682C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(44 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_0);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = SR_GetString_m9C84EE1DB2BE4E43D84B7CC8E7738DF0037070B5(_stringLiteral90F9CBF1CB442F777C7C65817FF133A697274698, /*hidden argument*/NULL);
		return L_2;
	}

IL_0013:
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_3 = ___reader0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)8)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0053;
			}
			case 1:
			{
				goto IL_00fd;
			}
			case 2:
			{
				goto IL_00af;
			}
			case 3:
			{
				goto IL_00e3;
			}
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)8)))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00fd;
	}

IL_0042:
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)13)))) > ((uint32_t)1))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)15))))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_00fd;
	}

IL_0053:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_12);
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_14 = ___reader0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		String_t* L_16 = XmlExceptionHelper_GetName_mC6F8835B7B56E83176F6880FDB7FD1F81BADD175(L_13, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_16);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_11;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_18 = ___reader0;
		NullCheck(L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		String_t* L_20 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteral9DBC4008A33D8E0DF953326F5E1D78277986D69A, L_17, /*hidden argument*/NULL);
		return L_20;
	}

IL_0081:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_21;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_23 = ___reader0;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_23);
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_25 = ___reader0;
		NullCheck(L_25);
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_25);
		String_t* L_27 = XmlExceptionHelper_GetName_mC6F8835B7B56E83176F6880FDB7FD1F81BADD175(L_24, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_27);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_27);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_22;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_29 = ___reader0;
		NullCheck(L_29);
		String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_29);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		String_t* L_31 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteralE934743A3310CC11B860F916F51F17F0CE6A58EA, L_28, /*hidden argument*/NULL);
		return L_31;
	}

IL_00af:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = L_32;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_34 = ___reader0;
		NullCheck(L_34);
		String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_34);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_35);
		String_t* L_36 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteral7D420BCEB802121AF7B9C4287FF2901D898C7584, L_33, /*hidden argument*/NULL);
		return L_36;
	}

IL_00c9:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_37;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_39 = ___reader0;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_39);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_40);
		String_t* L_41 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteral35B94102837FEED3F2A15B9E0FAD8120DC77329D, L_38, /*hidden argument*/NULL);
		return L_41;
	}

IL_00e3:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = L_42;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_44 = ___reader0;
		NullCheck(L_44);
		String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_44);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_45);
		String_t* L_46 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteral04B25CD86FDECC78E44D6FF7676CE4C8CFEF0CFC, L_43, /*hidden argument*/NULL);
		return L_46;
	}

IL_00fd:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_47 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_48 = L_47;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_49 = ___reader0;
		NullCheck(L_49);
		int32_t L_50 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_49);
		int32_t L_51 = L_50;
		RuntimeObject * L_52 = Box(XmlNodeType_tEE56AC4F9EC36B979516EA5836C4DA730B0A21E1_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_52);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_52);
		String_t* L_53 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteral6745335E8D4B2748B3B1DA63CCEA14C6A79558B4, L_48, /*hidden argument*/NULL);
		return L_53;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowStartElementExpected(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowStartElementExpected_m9A2128FF70834AA19DD1BF1375BF2578D2E583D4 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowStartElementExpected_m9A2128FF70834AA19DD1BF1375BF2578D2E583D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_1 = ___reader0;
		String_t* L_2 = XmlExceptionHelper_GetWhatWasFound_mEC6A7A3CBE0C86BB4EA488DB43875096327682C1(L_1, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteral155DEE1CD61616ABF8A4FC1644D819F1865E37FB, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowEndElementExpected(System.Xml.XmlDictionaryReader,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowEndElementExpected_m2809703CAB4352FA0A7AA447AE44B69C35A3E3E9 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___localName1, String_t* ___ns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowEndElementExpected_m2809703CAB4352FA0A7AA447AE44B69C35A3E3E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ___ns2;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_3 = ___reader0;
		String_t* L_4 = XmlExceptionHelper_GetWhatWasFound_mEC6A7A3CBE0C86BB4EA488DB43875096327682C1(L_3, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mE6F1D231B319C90E412A9BF8FFBEC5094CA40370(L_0, _stringLiteral4AA2899807FF8CD8D087DEC1BD13FE036877E757, L_1, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowMaxStringContentLengthExceeded(System.Xml.XmlDictionaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowMaxStringContentLengthExceeded_mB50E15627BE43274836C10C8AE8B867798485550 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, int32_t ___maxStringContentLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowMaxStringContentLengthExceeded_mB50E15627BE43274836C10C8AE8B867798485550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5((int32_t*)(&___maxStringContentLength1), L_1, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteral45197DBDAA2AE225BE3D7C260F0D98C9CE04E156, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowMaxArrayLengthExceeded(System.Xml.XmlDictionaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowMaxArrayLengthExceeded_m001B572413A71129B424E2D9212066B9046FED7E (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, int32_t ___maxArrayLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowMaxArrayLengthExceeded_m001B572413A71129B424E2D9212066B9046FED7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5((int32_t*)(&___maxArrayLength1), L_1, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteral46E2449811DF8FBB99047B055608E11412656390, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowMaxDepthExceeded(System.Xml.XmlDictionaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowMaxDepthExceeded_m8EE4190671CEF3A992CA54855B4A11C83B5B9059 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, int32_t ___maxDepth1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowMaxDepthExceeded_m8EE4190671CEF3A992CA54855B4A11C83B5B9059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5((int32_t*)(&___maxDepth1), L_1, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteral9B911EF854C86016C2CCE7DE163BA92A2DC03124, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowMaxBytesPerReadExceeded(System.Xml.XmlDictionaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowMaxBytesPerReadExceeded_m07A7EB8649AAE9D1CBEA7029E172A0D242C95203 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, int32_t ___maxBytesPerRead1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowMaxBytesPerReadExceeded_m07A7EB8649AAE9D1CBEA7029E172A0D242C95203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5((int32_t*)(&___maxBytesPerRead1), L_1, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteral7F2649FDD61FAA07C78AB163DFC9398E051BF532, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowMaxNameTableCharCountExceeded(System.Xml.XmlDictionaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowMaxNameTableCharCountExceeded_m17601BD7457CA2732ECF23EE39F350325220387F (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, int32_t ___maxNameTableCharCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowMaxNameTableCharCountExceeded_m17601BD7457CA2732ECF23EE39F350325220387F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5((int32_t*)(&___maxNameTableCharCount1), L_1, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteralCE649903DFFEB9A1DB533B87CFEF668CDEBA7B7F, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowBase64DataExpected(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowBase64DataExpected_m1A3A288BBBFDE3A12C606AA09563D80075476DC9 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowBase64DataExpected_m1A3A288BBBFDE3A12C606AA09563D80075476DC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_1 = ___reader0;
		String_t* L_2 = XmlExceptionHelper_GetWhatWasFound_mEC6A7A3CBE0C86BB4EA488DB43875096327682C1(L_1, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteral4F470EF49186B25A50E5BC7B810EC0D9F6C5A021, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowUndefinedPrefix(System.Xml.XmlDictionaryReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowUndefinedPrefix_m366C7F324E51F4E143CC1F99FE78093266C88F05 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___prefix1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowUndefinedPrefix_m366C7F324E51F4E143CC1F99FE78093266C88F05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		String_t* L_1 = ___prefix1;
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteral499C260D15A9FDEDB1DACC59B7EBB15ED4B11C9C, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowProcessingInstructionNotSupported(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowProcessingInstructionNotSupported_m70855EA2441FB2BA32CF3DAD46F912D91BBD10FC (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowProcessingInstructionNotSupported_m70855EA2441FB2BA32CF3DAD46F912D91BBD10FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlExceptionHelper_ThrowXmlException_mE7738229BA17072F87A165664145079FACBAF60A(L_0, _stringLiteral3F0BD819A9A57A95729A3BB224A730725E97D37B, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowInvalidXml(System.Xml.XmlDictionaryReader,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowInvalidXml_m06A54081D6D97EC5A1A11932866FBF77C95D81DB (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, uint8_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowInvalidXml_m06A54081D6D97EC5A1A11932866FBF77C95D81DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_1 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_2 = Byte_ToString_m731FDB27391432D7F14B6769B5D0A3E248803D25((uint8_t*)(&___b1), _stringLiteral9F792B61D0EC544D91E7AFF34E2E99EE3CF2B313, L_1, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteral4E944ED4D64EA746CA5AD73FC7D5787CF0D735AB, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowUnexpectedEndOfFile(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowUnexpectedEndOfFile_m1CAE4E6E0986DD3F786B85A90BEF85E609FDBF5E (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowUnexpectedEndOfFile_m1CAE4E6E0986DD3F786B85A90BEF85E609FDBF5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_1 = ___reader0;
		NullCheck(((XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 *)CastclassClass((RuntimeObject*)L_1, XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269_il2cpp_TypeInfo_var)));
		String_t* L_2 = XmlBaseReader_GetOpenElements_m9FC225ECE59BC567003A00634B3C99139E0674D2(((XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269 *)CastclassClass((RuntimeObject*)L_1, XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteral950CDE75A859B38EA2CDCCCDFAAADEE5E9CC06C8, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowUnexpectedEndElement(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowUnexpectedEndElement_mC63F917340784B3782D1948207E64E6B73110189 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowUnexpectedEndElement_mC63F917340784B3782D1948207E64E6B73110189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlExceptionHelper_ThrowXmlException_mE7738229BA17072F87A165664145079FACBAF60A(L_0, _stringLiteralDE9F162F6EE6DF4C012E68735287405E318F59F8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowTokenExpected(System.Xml.XmlDictionaryReader,System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowTokenExpected_m58AA20C98DF41754931AB76334B48A47C2660099 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___expected1, Il2CppChar ___found2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowTokenExpected_m58AA20C98DF41754931AB76334B48A47C2660099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		String_t* L_1 = ___expected1;
		String_t* L_2 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&___found2), /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mFA170408D09BD92C2710B3C2DC763B6BA254CE9E(L_0, _stringLiteralAFE3B98AFF8BD9E796D718F33E6FB099831ECC72, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowTokenExpected(System.Xml.XmlDictionaryReader,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowTokenExpected_mA379717CE09073B49DC624B5B2474EAF7AAAB4A2 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___expected1, String_t* ___found2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowTokenExpected_mA379717CE09073B49DC624B5B2474EAF7AAAB4A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		String_t* L_1 = ___expected1;
		String_t* L_2 = ___found2;
		XmlExceptionHelper_ThrowXmlException_mFA170408D09BD92C2710B3C2DC763B6BA254CE9E(L_0, _stringLiteralAFE3B98AFF8BD9E796D718F33E6FB099831ECC72, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowInvalidCharRef(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowInvalidCharRef_m433A0CF9B462184589B9B701A8144A2F935CD9A8 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowInvalidCharRef_m433A0CF9B462184589B9B701A8144A2F935CD9A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlExceptionHelper_ThrowXmlException_mE7738229BA17072F87A165664145079FACBAF60A(L_0, _stringLiteralF9AE9A0DB2071161DA6CF5CCFB5C89C13D2097B1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowTagMismatch(System.Xml.XmlDictionaryReader,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowTagMismatch_m84B14036AC27C158CF152BA4AA8BB3F0B32F77C2 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___expectedPrefix1, String_t* ___expectedLocalName2, String_t* ___foundPrefix3, String_t* ___foundLocalName4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowTagMismatch_m84B14036AC27C158CF152BA4AA8BB3F0B32F77C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		String_t* L_1 = ___expectedPrefix1;
		String_t* L_2 = ___expectedLocalName2;
		String_t* L_3 = XmlExceptionHelper_GetName_mC6F8835B7B56E83176F6880FDB7FD1F81BADD175(L_1, L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___foundPrefix3;
		String_t* L_5 = ___foundLocalName4;
		String_t* L_6 = XmlExceptionHelper_GetName_mC6F8835B7B56E83176F6880FDB7FD1F81BADD175(L_4, L_5, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mFA170408D09BD92C2710B3C2DC763B6BA254CE9E(L_0, _stringLiteral7A0A94E897212727C5941381BDB1AFA1CE0A8F5D, L_3, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowDuplicateXmlnsAttribute(System.Xml.XmlDictionaryReader,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowDuplicateXmlnsAttribute_mC407AC8630B2B959A0694F773B42683FA5F7FBD7 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___localName1, String_t* ___ns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowDuplicateXmlnsAttribute_mC407AC8630B2B959A0694F773B42683FA5F7FBD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___localName1;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_0 = _stringLiteral417937288FDEE75EA79B1648FDB20AE19A1B35EA;
		goto IL_001c;
	}

IL_0010:
	{
		String_t* L_2 = ___localName1;
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF49AC8069B2E7DB7ED8CBA68142A49F9825D1654, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001c:
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_4 = ___reader0;
		String_t* L_5 = V_0;
		String_t* L_6 = V_0;
		String_t* L_7 = ___ns2;
		XmlExceptionHelper_ThrowXmlException_mE6F1D231B319C90E412A9BF8FFBEC5094CA40370(L_4, _stringLiteralB259D122FB9F21E0B064528AD76518C107D0CD50, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowDuplicateAttribute(System.Xml.XmlDictionaryReader,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowDuplicateAttribute_m182FD4202019EA2BD89445C9D645D9661217ACAC (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, String_t* ___prefix11, String_t* ___prefix22, String_t* ___localName3, String_t* ___ns4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowDuplicateAttribute_m182FD4202019EA2BD89445C9D645D9661217ACAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		String_t* L_1 = ___prefix11;
		String_t* L_2 = ___localName3;
		String_t* L_3 = XmlExceptionHelper_GetName_mC6F8835B7B56E83176F6880FDB7FD1F81BADD175(L_1, L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___prefix22;
		String_t* L_5 = ___localName3;
		String_t* L_6 = XmlExceptionHelper_GetName_mC6F8835B7B56E83176F6880FDB7FD1F81BADD175(L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___ns4;
		XmlExceptionHelper_ThrowXmlException_mE6F1D231B319C90E412A9BF8FFBEC5094CA40370(L_0, _stringLiteralB259D122FB9F21E0B064528AD76518C107D0CD50, L_3, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowInvalidBinaryFormat(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowInvalidBinaryFormat_mFF528D09DAC94EB7E9EA558F6FD87660F627E9E8 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowInvalidBinaryFormat_mFF528D09DAC94EB7E9EA558F6FD87660F627E9E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlExceptionHelper_ThrowXmlException_mE7738229BA17072F87A165664145079FACBAF60A(L_0, _stringLiteral2004434E701A3933AFB96CDD5CF230E39B092F69, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowInvalidRootData(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowInvalidRootData_m0572DE2D5BF719BFAABEF604B7D9AC3D731DABAC (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowInvalidRootData_m0572DE2D5BF719BFAABEF604B7D9AC3D731DABAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlExceptionHelper_ThrowXmlException_mE7738229BA17072F87A165664145079FACBAF60A(L_0, _stringLiteral4D860A9BEFE72250C2B4250998B73E43B638A416, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowMultipleRootElements(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowMultipleRootElements_mB3BC40AB9A8B97310EB3D7FB3171E2CB2DE33B35 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowMultipleRootElements_mB3BC40AB9A8B97310EB3D7FB3171E2CB2DE33B35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlExceptionHelper_ThrowXmlException_mE7738229BA17072F87A165664145079FACBAF60A(L_0, _stringLiteralDEF160FCD5CCFA1403F690DD100EA7D0BAC6F382, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowDeclarationNotFirst(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowDeclarationNotFirst_mD72489AE6AAAB1F5895C5E53F7B13239271FE69A (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowDeclarationNotFirst_mD72489AE6AAAB1F5895C5E53F7B13239271FE69A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlExceptionHelper_ThrowXmlException_mE7738229BA17072F87A165664145079FACBAF60A(L_0, _stringLiteral09985C0635CC077F2EA007754B682EFA526F1F91, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlDictionaryStringIDOutOfRange(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlDictionaryStringIDOutOfRange_mBB18DA067380492A55F708967455FE0F59F38E0F (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowXmlDictionaryStringIDOutOfRange_mBB18DA067380492A55F708967455FE0F59F38E0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		V_0 = 0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5((int32_t*)(&V_0), L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)536870911);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_3 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_4 = Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5((int32_t*)(&V_0), L_3, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mFA170408D09BD92C2710B3C2DC763B6BA254CE9E(L_0, _stringLiteral3F657D500ABCC5CEA820F6AF12CFBCF8683DC232, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlDictionaryStringIDUndefinedStatic(System.Xml.XmlDictionaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlDictionaryStringIDUndefinedStatic_mE4DE182A8382D47EA11ED529E6E4B905701E4966 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, int32_t ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowXmlDictionaryStringIDUndefinedStatic_mE4DE182A8382D47EA11ED529E6E4B905701E4966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5((int32_t*)(&___key1), L_1, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteral0C44A5310F13E19B270169781652CF4183211D53, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowXmlDictionaryStringIDUndefinedSession(System.Xml.XmlDictionaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowXmlDictionaryStringIDUndefinedSession_m5F775B861B665594DD0A8176A705E8B7034241BE (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, int32_t ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowXmlDictionaryStringIDUndefinedSession_m5F775B861B665594DD0A8176A705E8B7034241BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Int32_ToString_m1D0AF82BDAB5D4710527DD3FEFA6F01246D128A5((int32_t*)(&___key1), L_1, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_mEECCE9A9C8B03095B732C5E1062509EEF330227F(L_0, _stringLiteralC47423B796CFCE3A6251C94EDCF1D2FA3E31B113, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlExceptionHelper::ThrowEmptyNamespace(System.Xml.XmlDictionaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlExceptionHelper_ThrowEmptyNamespace_m3E06D5B2923AA099AC0B6E139418D19A40421CE9 (XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_ThrowEmptyNamespace_m3E06D5B2923AA099AC0B6E139418D19A40421CE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDictionaryReader_tC1FBB889FB4CF706B7300E620000F6262C540D61 * L_0 = ___reader0;
		XmlExceptionHelper_ThrowXmlException_mE7738229BA17072F87A165664145079FACBAF60A(L_0, _stringLiteralDD335ACEBE621EC617D26FB86086F38EC9968913, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlException System.Xml.XmlExceptionHelper::CreateConversionException(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * XmlExceptionHelper_CreateConversionException_m4F2F1D988D68AC374593B30EEE0EC1F492F87237 (String_t* ___value0, String_t* ___type1, Exception_t * ___exception2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_CreateConversionException_m4F2F1D988D68AC374593B30EEE0EC1F492F87237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___value0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		String_t* L_4 = ___type1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		String_t* L_5 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteral97D361C1E9E9AB2CAFD243F894D71FEA14A9CDC1, L_3, /*hidden argument*/NULL);
		Exception_t * L_6 = ___exception2;
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_7 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_mD792ADCB351BBCDFFAB73F8B92EE98DA7BC41328(L_7, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Xml.XmlException System.Xml.XmlExceptionHelper::CreateEncodingException(System.Byte[],System.Int32,System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * XmlExceptionHelper_CreateEncodingException_m74F8C6DBAE7583C535BFE1C5E7D683D70FBA94D2 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, Exception_t * ___exception3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_CreateEncodingException_m74F8C6DBAE7583C535BFE1C5E7D683D70FBA94D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_0 = (UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE *)il2cpp_codegen_object_new(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m026030C6C39449C25EC6FA364AA0A49FB3ADCD9E(L_0, (bool)0, (bool)0, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		String_t* L_4 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		Exception_t * L_5 = ___exception3;
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_6 = XmlExceptionHelper_CreateEncodingException_mC87D19A145C345A626F5294F3A93A524CBFCFD6B(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Xml.XmlException System.Xml.XmlExceptionHelper::CreateEncodingException(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * XmlExceptionHelper_CreateEncodingException_mC87D19A145C345A626F5294F3A93A524CBFCFD6B (String_t* ___value0, Exception_t * ___exception1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlExceptionHelper_CreateEncodingException_mC87D19A145C345A626F5294F3A93A524CBFCFD6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___value0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		String_t* L_3 = SR_GetString_mFDE6E78868D910BABB39FB0D144C3066DBE2CD7A(_stringLiteral8ADC182DD6BF8AFACFADBFD69CB7F6CE40582472, L_1, /*hidden argument*/NULL);
		Exception_t * L_4 = ___exception1;
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_5 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_mD792ADCB351BBCDFFAB73F8B92EE98DA7BC41328(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlNodeWriter::WriteStartElement(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWriter_WriteStartElement_mB0519BF94C59A1A2293D19D807526005DDD0EDB3 (XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer3, int32_t ___localNameOffset4, int32_t ___localNameLength5, const RuntimeMethod* method)
{
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		NullCheck(L_0);
		String_t* L_4 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_5 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___localNameBuffer3;
		int32_t L_7 = ___localNameOffset4;
		int32_t L_8 = ___localNameLength5;
		NullCheck(L_5);
		String_t* L_9 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, L_7, L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNodeWriter::WriteStartElement(System.String,System.String) */, __this, L_4, L_9);
		return;
	}
}
// System.Void System.Xml.XmlNodeWriter::WriteEndElement(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWriter_WriteEndElement_m15DE7CFEE18416886EE62CCB0DB5EBF1E03D554C (XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer3, int32_t ___localNameOffset4, int32_t ___localNameLength5, const RuntimeMethod* method)
{
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		NullCheck(L_0);
		String_t* L_4 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_5 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___localNameBuffer3;
		int32_t L_7 = ___localNameOffset4;
		int32_t L_8 = ___localNameLength5;
		NullCheck(L_5);
		String_t* L_9 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, L_7, L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(11 /* System.Void System.Xml.XmlNodeWriter::WriteEndElement(System.String,System.String) */, __this, L_4, L_9);
		return;
	}
}
// System.Void System.Xml.XmlNodeWriter::WriteXmlnsAttribute(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWriter_WriteXmlnsAttribute_mCF4F563CBC037DF934D96178888EB9B5E9ACF24F (XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___nsBuffer3, int32_t ___nsOffset4, int32_t ___nsLength5, const RuntimeMethod* method)
{
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		NullCheck(L_0);
		String_t* L_4 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_5 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___nsBuffer3;
		int32_t L_7 = ___nsOffset4;
		int32_t L_8 = ___nsLength5;
		NullCheck(L_5);
		String_t* L_9 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, L_7, L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void System.Xml.XmlNodeWriter::WriteXmlnsAttribute(System.String,System.String) */, __this, L_4, L_9);
		return;
	}
}
// System.Void System.Xml.XmlNodeWriter::WriteStartAttribute(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWriter_WriteStartAttribute_mBFD5A464EB03A332E06476514A0D35B5EFA3878E (XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer3, int32_t ___localNameOffset4, int32_t ___localNameLength5, const RuntimeMethod* method)
{
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		NullCheck(L_0);
		String_t* L_4 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_5 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___localNameBuffer3;
		int32_t L_7 = ___localNameOffset4;
		int32_t L_8 = ___localNameLength5;
		NullCheck(L_5);
		String_t* L_9 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, L_7, L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(15 /* System.Void System.Xml.XmlNodeWriter::WriteStartAttribute(System.String,System.String) */, __this, L_4, L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlSigningNodeWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_Flush_m272A154D355E3F94BC86CD4D9D6B9448EE1FB58B (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void System.Xml.XmlNodeWriter::Flush() */, L_0);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_1 = __this->get_signingWriter_1();
		NullCheck(L_1);
		XmlCanonicalWriter_Flush_mBCC2263805427A473D1446393C098061543CF6A0(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_Close_m75667F8497C6CCEF9647D2AB952D57496DCF5BDF (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void System.Xml.XmlNodeWriter::Close() */, L_0);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_1 = __this->get_signingWriter_1();
		NullCheck(L_1);
		XmlCanonicalWriter_Close_m3808C94346878BF050AEBC7E1241BF8521C968CD(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteDeclaration_m2E1B56005C03CDFBEAC1C8414B64D67A2129E935 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Xml.XmlNodeWriter::WriteDeclaration() */, L_0);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_1 = __this->get_signingWriter_1();
		NullCheck(L_1);
		XmlCanonicalWriter_WriteDeclaration_m730C2B5B4639CA2BB14D3826AA3F8CDF3529FB9C(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteComment_mD773DA47CBE8981F41D30473DD2FF5343F76B8ED (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(7 /* System.Void System.Xml.XmlNodeWriter::WriteComment(System.String) */, L_0, L_1);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_2 = __this->get_signingWriter_1();
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		XmlCanonicalWriter_WriteComment_mBDA9ACEDE357D3E84D1B2A74AAF5CD0EE40144FF(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteStartElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteStartElement_m7BCC733750AE69672D9F76F211B6E00B233BAD66 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		String_t* L_1 = ___prefix0;
		String_t* L_2 = ___localName1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNodeWriter::WriteStartElement(System.String,System.String) */, L_0, L_1, L_2);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_3 = __this->get_signingWriter_1();
		String_t* L_4 = ___prefix0;
		String_t* L_5 = ___localName1;
		NullCheck(L_3);
		XmlCanonicalWriter_WriteStartElement_m50D0BA8E772451293D3A5CAB9603A26D98B58F68(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteStartElement(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteStartElement_m60CEEDADC0927C93379B65BAB1854987A58D609F (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer3, int32_t ___localNameOffset4, int32_t ___localNameLength5, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___localNameBuffer3;
		int32_t L_5 = ___localNameOffset4;
		int32_t L_6 = ___localNameLength5;
		NullCheck(L_0);
		VirtActionInvoker6< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(9 /* System.Void System.Xml.XmlNodeWriter::WriteStartElement(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_7 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___prefixBuffer0;
		int32_t L_9 = ___prefixOffset1;
		int32_t L_10 = ___prefixLength2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___localNameBuffer3;
		int32_t L_12 = ___localNameOffset4;
		int32_t L_13 = ___localNameLength5;
		NullCheck(L_7);
		XmlCanonicalWriter_WriteStartElement_mC8AD4204EB830F45B243958D6B93234ED303929D(L_7, L_8, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteEndStartElement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteEndStartElement_mE75257C8459953C4AD39C9B0EB809E2441132A86 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, bool ___isEmpty0, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		bool L_1 = ___isEmpty0;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Xml.XmlNodeWriter::WriteEndStartElement(System.Boolean) */, L_0, L_1);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_2 = __this->get_signingWriter_1();
		bool L_3 = ___isEmpty0;
		NullCheck(L_2);
		XmlCanonicalWriter_WriteEndStartElement_m5B539C7CB9A63EAC2A18E3B4E03FE514B36FFF64(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteEndElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteEndElement_m0FDEEA5672C00277154918A0D9867DF62F8CAA9E (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		String_t* L_1 = ___prefix0;
		String_t* L_2 = ___localName1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(11 /* System.Void System.Xml.XmlNodeWriter::WriteEndElement(System.String,System.String) */, L_0, L_1, L_2);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_3 = __this->get_signingWriter_1();
		String_t* L_4 = ___prefix0;
		String_t* L_5 = ___localName1;
		NullCheck(L_3);
		XmlCanonicalWriter_WriteEndElement_mEA5A772E4DD2BA6400AC06F7AB038A3544B2E015(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteXmlnsAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteXmlnsAttribute_m210EDC96CF6A9AD493FB4052FA61710BC81E33CA (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, String_t* ___prefix0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		String_t* L_1 = ___prefix0;
		String_t* L_2 = ___ns1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void System.Xml.XmlNodeWriter::WriteXmlnsAttribute(System.String,System.String) */, L_0, L_1, L_2);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_3 = __this->get_signingWriter_1();
		String_t* L_4 = ___prefix0;
		String_t* L_5 = ___ns1;
		NullCheck(L_3);
		XmlCanonicalWriter_WriteXmlnsAttribute_mC0A59079F1921D9210AD3542C457D8F397EDEBE5(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteXmlnsAttribute(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteXmlnsAttribute_m7FC346EE25717CCCC8CE187F71C43D6F802533C6 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___nsBuffer3, int32_t ___nsOffset4, int32_t ___nsLength5, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___nsBuffer3;
		int32_t L_5 = ___nsOffset4;
		int32_t L_6 = ___nsLength5;
		NullCheck(L_0);
		VirtActionInvoker6< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(14 /* System.Void System.Xml.XmlNodeWriter::WriteXmlnsAttribute(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_7 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___prefixBuffer0;
		int32_t L_9 = ___prefixOffset1;
		int32_t L_10 = ___prefixLength2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___nsBuffer3;
		int32_t L_12 = ___nsOffset4;
		int32_t L_13 = ___nsLength5;
		NullCheck(L_7);
		XmlCanonicalWriter_WriteXmlnsAttribute_m00E4FB82497E88F6C5520C4AA3332CB9D55639FA(L_7, L_8, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteStartAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteStartAttribute_m5600717D6C14C7AB114411FA037AFDAE56AE807E (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		String_t* L_1 = ___prefix0;
		String_t* L_2 = ___localName1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(15 /* System.Void System.Xml.XmlNodeWriter::WriteStartAttribute(System.String,System.String) */, L_0, L_1, L_2);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_3 = __this->get_signingWriter_1();
		String_t* L_4 = ___prefix0;
		String_t* L_5 = ___localName1;
		NullCheck(L_3);
		XmlCanonicalWriter_WriteStartAttribute_m485A9D39770C2F79B8E15F8E137C0F66B77237EF(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteStartAttribute(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteStartAttribute_mA3850078B67D9694BF1CFBACF5202B8969D0B735 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer3, int32_t ___localNameOffset4, int32_t ___localNameLength5, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___localNameBuffer3;
		int32_t L_5 = ___localNameOffset4;
		int32_t L_6 = ___localNameLength5;
		NullCheck(L_0);
		VirtActionInvoker6< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(16 /* System.Void System.Xml.XmlNodeWriter::WriteStartAttribute(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_7 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___prefixBuffer0;
		int32_t L_9 = ___prefixOffset1;
		int32_t L_10 = ___prefixLength2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___localNameBuffer3;
		int32_t L_12 = ___localNameOffset4;
		int32_t L_13 = ___localNameLength5;
		NullCheck(L_7);
		XmlCanonicalWriter_WriteStartAttribute_m87B3E18C6A693B7A6DA75D5FEF6FC4A04854DD11(L_7, L_8, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteEndAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteEndAttribute_mFC250EB87DE79A3470E2861C8DEE3CD3EAF0A6C2 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlNodeWriter::WriteEndAttribute() */, L_0);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_1 = __this->get_signingWriter_1();
		NullCheck(L_1);
		XmlCanonicalWriter_WriteEndAttribute_m35CF6C2840542AC2BE200C396346387DD52EFE91(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteCharEntity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteCharEntity_mBE5C884492B84C2B1297D4674141428E84C72851 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, int32_t ___ch0, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		int32_t L_1 = ___ch0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Xml.XmlNodeWriter::WriteCharEntity(System.Int32) */, L_0, L_1);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_2 = __this->get_signingWriter_1();
		int32_t L_3 = ___ch0;
		NullCheck(L_2);
		XmlCanonicalWriter_WriteCharEntity_m4E8D88D934527B08C14E67A0A3F52C080BB42283(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteEscapedText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteEscapedText_m064DF7A2D2278EC17D6E987F051BF0EBD4A708D0 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Xml.XmlNodeWriter::WriteEscapedText(System.String) */, L_0, L_1);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_2 = __this->get_signingWriter_1();
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		XmlCanonicalWriter_WriteEscapedText_m1EF74F6533A8E6E74CC699CDF54F750E5621B2CE(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteEscapedText(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteEscapedText_mF8FBDB9746D41009034FD0CA63344958E0C829CC (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___chars0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtActionInvoker3< CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*, int32_t, int32_t >::Invoke(20 /* System.Void System.Xml.XmlNodeWriter::WriteEscapedText(System.Char[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_4 = __this->get_signingWriter_1();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = ___chars0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		XmlCanonicalWriter_WriteEscapedText_m729C83751CF0AD614E659B83523293CA261A500A(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteEscapedText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteEscapedText_mFC8D383F40F40D54A5E75D27B9ECD16144D6180A (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___chars0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(21 /* System.Void System.Xml.XmlNodeWriter::WriteEscapedText(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_4 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___chars0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		XmlCanonicalWriter_WriteEscapedText_m765C86662A3228C67565B3C9553FD5ADAC260006(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteText_m49EC7F45C1678E2F0678F50838A2EC87479BDA7D (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.String) */, L_0, L_1);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_2 = __this->get_signingWriter_1();
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		XmlCanonicalWriter_WriteText_m77657C8E70D247B76590E3345988232A87ED0A26(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteText(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteText_m56D8A43A629CDE940A6973144A1C670C812355FD (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___chars0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtActionInvoker3< CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*, int32_t, int32_t >::Invoke(23 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Char[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_4 = __this->get_signingWriter_1();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = ___chars0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		XmlCanonicalWriter_WriteText_mD192F877096FE27E45CF33D15B611EA9D1A312DD(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteText_m1B890BCA9DA4BA45BCCA4CEFD13674EDF599D399 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_0 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___chars0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_4 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___chars0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteInt32Text(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteInt32Text_mC049C667BE05BE087EE96ACB52298832C75D9AF9 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteInt32Text_mC049C667BE05BE087EE96ACB52298832C75D9AF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_chars_2();
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_2 = XmlConverter_ToChars_m76527E4539FA08D5F960F07BB6533A86B638827A(L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = __this->get_text_4();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_4 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_chars_2();
		int32_t L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, L_6);
		goto IL_0037;
	}

IL_002b:
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_7 = __this->get_writer_0();
		int32_t L_8 = ___value0;
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(25 /* System.Void System.Xml.XmlNodeWriter::WriteInt32Text(System.Int32) */, L_7, L_8);
	}

IL_0037:
	{
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_9 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = __this->get_chars_2();
		int32_t L_11 = V_0;
		NullCheck(L_9);
		XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C(L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteInt64Text(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteInt64Text_mF44C1227890B2B5AAFF87E17AF5F6CB9F5C6496C (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteInt64Text_mF44C1227890B2B5AAFF87E17AF5F6CB9F5C6496C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int64_t L_0 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_chars_2();
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_2 = XmlConverter_ToChars_mC4517ABB1158A183F61BD276E13AA8B9A810D3B0(L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = __this->get_text_4();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_4 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_chars_2();
		int32_t L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, L_6);
		goto IL_0037;
	}

IL_002b:
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_7 = __this->get_writer_0();
		int64_t L_8 = ___value0;
		NullCheck(L_7);
		VirtActionInvoker1< int64_t >::Invoke(26 /* System.Void System.Xml.XmlNodeWriter::WriteInt64Text(System.Int64) */, L_7, L_8);
	}

IL_0037:
	{
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_9 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = __this->get_chars_2();
		int32_t L_11 = V_0;
		NullCheck(L_9);
		XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C(L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteUInt64Text(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteUInt64Text_m82E948E2B9ECD7ECC20FDFCA13507AFEF41D190D (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteUInt64Text_m82E948E2B9ECD7ECC20FDFCA13507AFEF41D190D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint64_t L_0 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_chars_2();
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_2 = XmlConverter_ToChars_m53EC6E9A18A98DBBD73B9BBBDE796B55D3BBFA7F(L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = __this->get_text_4();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_4 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_chars_2();
		int32_t L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, L_6);
		goto IL_0037;
	}

IL_002b:
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_7 = __this->get_writer_0();
		uint64_t L_8 = ___value0;
		NullCheck(L_7);
		VirtActionInvoker1< uint64_t >::Invoke(27 /* System.Void System.Xml.XmlNodeWriter::WriteUInt64Text(System.UInt64) */, L_7, L_8);
	}

IL_0037:
	{
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_9 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = __this->get_chars_2();
		int32_t L_11 = V_0;
		NullCheck(L_9);
		XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C(L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteFloatText(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteFloatText_m9597D78695BBA13458AE31F511490A6297F9A677 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteFloatText_m9597D78695BBA13458AE31F511490A6297F9A677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_chars_2();
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_2 = XmlConverter_ToChars_m7C184C40D054A50646F4972B5FC5DA0A9098E8D5(L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = __this->get_text_4();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_4 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_chars_2();
		int32_t L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, L_6);
		goto IL_0037;
	}

IL_002b:
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_7 = __this->get_writer_0();
		float L_8 = ___value0;
		NullCheck(L_7);
		VirtActionInvoker1< float >::Invoke(28 /* System.Void System.Xml.XmlNodeWriter::WriteFloatText(System.Single) */, L_7, L_8);
	}

IL_0037:
	{
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_9 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = __this->get_chars_2();
		int32_t L_11 = V_0;
		NullCheck(L_9);
		XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C(L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteDoubleText(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteDoubleText_m0AA1139A9CCC4AA820CC254D2377CD1825440560 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteDoubleText_m0AA1139A9CCC4AA820CC254D2377CD1825440560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		double L_0 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_chars_2();
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_2 = XmlConverter_ToChars_mF58DA46065CE4058E30F8C2581EE015187404FF2(L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = __this->get_text_4();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_4 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_chars_2();
		int32_t L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, L_6);
		goto IL_0037;
	}

IL_002b:
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_7 = __this->get_writer_0();
		double L_8 = ___value0;
		NullCheck(L_7);
		VirtActionInvoker1< double >::Invoke(29 /* System.Void System.Xml.XmlNodeWriter::WriteDoubleText(System.Double) */, L_7, L_8);
	}

IL_0037:
	{
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_9 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = __this->get_chars_2();
		int32_t L_11 = V_0;
		NullCheck(L_9);
		XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C(L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteDecimalText(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteDecimalText_m939E0B3149D310A83E55E8B30C8F6EF6275428F0 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteDecimalText_m939E0B3149D310A83E55E8B30C8F6EF6275428F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_0 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_chars_2();
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_2 = XmlConverter_ToChars_mDE762853FBC05A7BA94BD23B584CB047532B902E(L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = __this->get_text_4();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_4 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_chars_2();
		int32_t L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, L_6);
		goto IL_0037;
	}

IL_002b:
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_7 = __this->get_writer_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_8 = ___value0;
		NullCheck(L_7);
		VirtActionInvoker1< Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  >::Invoke(30 /* System.Void System.Xml.XmlNodeWriter::WriteDecimalText(System.Decimal) */, L_7, L_8);
	}

IL_0037:
	{
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_9 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = __this->get_chars_2();
		int32_t L_11 = V_0;
		NullCheck(L_9);
		XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C(L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteDateTimeText(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteDateTimeText_m39FB33EDF74F6C7F9F7A9CA7F85F7A109EC229B2 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteDateTimeText_m39FB33EDF74F6C7F9F7A9CA7F85F7A109EC229B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_chars_2();
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_2 = XmlConverter_ToChars_m974365FC014734B71EF291A2188A8568F76FB2E9(L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = __this->get_text_4();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_4 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_chars_2();
		int32_t L_6 = V_0;
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, L_6);
		goto IL_0037;
	}

IL_002b:
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_7 = __this->get_writer_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_8 = ___value0;
		NullCheck(L_7);
		VirtActionInvoker1< DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(31 /* System.Void System.Xml.XmlNodeWriter::WriteDateTimeText(System.DateTime) */, L_7, L_8);
	}

IL_0037:
	{
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_9 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = __this->get_chars_2();
		int32_t L_11 = V_0;
		NullCheck(L_9);
		XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C(L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteUniqueIdText(System.Xml.UniqueId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteUniqueIdText_mDD2519D6018760437B410F6BC8D6C5290B93C251 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteUniqueIdText_mDD2519D6018760437B410F6BC8D6C5290B93C251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConverter_ToString_m25B2973B69D06ED616F3369234E60A1EF32F1CB9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = __this->get_text_4();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_3 = __this->get_writer_0();
		String_t* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.String) */, L_3, L_4);
		goto IL_0029;
	}

IL_001d:
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_5 = __this->get_writer_0();
		UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * L_6 = ___value0;
		NullCheck(L_5);
		VirtActionInvoker1< UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * >::Invoke(32 /* System.Void System.Xml.XmlNodeWriter::WriteUniqueIdText(System.Xml.UniqueId) */, L_5, L_6);
	}

IL_0029:
	{
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_7 = __this->get_signingWriter_1();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		XmlCanonicalWriter_WriteText_m77657C8E70D247B76590E3345988232A87ED0A26(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteTimeSpanText(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteTimeSpanText_mF103384C6B24824A7EAA0D36C5E4496174571BEC (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteTimeSpanText_mF103384C6B24824A7EAA0D36C5E4496174571BEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConverter_ToString_m906C549F578CBD45E34D266D74E7102A5A716FAB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = __this->get_text_4();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_3 = __this->get_writer_0();
		String_t* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.String) */, L_3, L_4);
		goto IL_0029;
	}

IL_001d:
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_5 = __this->get_writer_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_6 = ___value0;
		NullCheck(L_5);
		VirtActionInvoker1< TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  >::Invoke(33 /* System.Void System.Xml.XmlNodeWriter::WriteTimeSpanText(System.TimeSpan) */, L_5, L_6);
	}

IL_0029:
	{
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_7 = __this->get_signingWriter_1();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		XmlCanonicalWriter_WriteText_m77657C8E70D247B76590E3345988232A87ED0A26(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteGuidText(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteGuidText_m9EBE08E8631511B6563CF51A571F0E39B5A9C481 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteGuidText_m9EBE08E8631511B6563CF51A571F0E39B5A9C481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Guid_t  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConverter_ToString_m96A774F789B7B87EDCDFC78DA4A7B4A73341627E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = __this->get_text_4();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_3 = __this->get_writer_0();
		String_t* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.String) */, L_3, L_4);
		goto IL_0029;
	}

IL_001d:
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_5 = __this->get_writer_0();
		Guid_t  L_6 = ___value0;
		NullCheck(L_5);
		VirtActionInvoker1< Guid_t  >::Invoke(34 /* System.Void System.Xml.XmlNodeWriter::WriteGuidText(System.Guid) */, L_5, L_6);
	}

IL_0029:
	{
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_7 = __this->get_signingWriter_1();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		XmlCanonicalWriter_WriteText_m77657C8E70D247B76590E3345988232A87ED0A26(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteBase64Text(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteBase64Text_m7521D676791C9E87F47FAD094A151E4563CFDFA5 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___trailBytes0, int32_t ___trailByteCount1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer2, int32_t ___offset3, int32_t ___count4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___trailByteCount1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___trailBytes0;
		int32_t L_2 = ___trailByteCount1;
		XmlSigningNodeWriter_WriteBase64Text_m6DC54A879B8A2AF3CC6825F4ECFCD455EA7887F8(__this, L_1, 0, L_2, /*hidden argument*/NULL);
	}

IL_000d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer2;
		int32_t L_4 = ___offset3;
		int32_t L_5 = ___count4;
		XmlSigningNodeWriter_WriteBase64Text_m6DC54A879B8A2AF3CC6825F4ECFCD455EA7887F8(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		bool L_6 = __this->get_text_4();
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_7 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___trailBytes0;
		int32_t L_9 = ___trailByteCount1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___buffer2;
		int32_t L_11 = ___offset3;
		int32_t L_12 = ___count4;
		NullCheck(L_7);
		VirtActionInvoker5< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(35 /* System.Void System.Xml.XmlNodeWriter::WriteBase64Text(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32) */, L_7, L_8, L_9, L_10, L_11, L_12);
	}

IL_0032:
	{
		return;
	}
}
// System.Void System.Xml.XmlSigningNodeWriter::WriteBase64Text(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSigningNodeWriter_WriteBase64Text_m6DC54A879B8A2AF3CC6825F4ECFCD455EA7887F8 (XmlSigningNodeWriter_t4F329B25CBC9FB66D90B06690E129A3E8A03E16F * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSigningNodeWriter_WriteBase64Text_m6DC54A879B8A2AF3CC6825F4ECFCD455EA7887F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_base64Chars_3();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		__this->set_base64Chars_3(L_1);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * L_2 = XmlConverter_get_Base64Encoding_m4D5EEA53C5F298A0D44CA25FA32D7030AEB25EDC(/*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0086;
	}

IL_0020:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_base64Chars_3();
		NullCheck(L_3);
		int32_t L_4 = ___count2;
		int32_t L_5 = ___count2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_6 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))/(int32_t)4)), (int32_t)3)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)((int32_t)L_5%(int32_t)3)))), /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_7/(int32_t)3)), (int32_t)4));
		Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * L_8 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = __this->get_base64Chars_3();
		NullCheck(L_8);
		Base64Encoding_GetChars_mF9732308F8D03D48B4C6CE8E0346FB6EAC117DB0(L_8, L_9, L_10, L_11, L_12, 0, /*hidden argument*/NULL);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_13 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get_base64Chars_3();
		int32_t L_15 = V_2;
		NullCheck(L_13);
		XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C(L_13, L_14, 0, L_15, /*hidden argument*/NULL);
		bool L_16 = __this->get_text_4();
		if (!L_16)
		{
			goto IL_007c;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_17 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = __this->get_base64Chars_3();
		int32_t L_19 = V_2;
		NullCheck(L_17);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, L_19);
	}

IL_007c:
	{
		int32_t L_20 = ___offset1;
		int32_t L_21 = V_1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21));
		int32_t L_22 = ___count2;
		int32_t L_23 = V_1;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23));
	}

IL_0086:
	{
		int32_t L_24 = ___count2;
		if ((((int32_t)L_24) >= ((int32_t)3)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_25 = ___count2;
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * L_26 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = ___buffer0;
		int32_t L_28 = ___offset1;
		int32_t L_29 = ___count2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = __this->get_base64Chars_3();
		NullCheck(L_26);
		Base64Encoding_GetChars_mF9732308F8D03D48B4C6CE8E0346FB6EAC117DB0(L_26, L_27, L_28, L_29, L_30, 0, /*hidden argument*/NULL);
		XmlCanonicalWriter_t43B71502B8DDD9AFF53ABD00E76F6D0E9DFE5B08 * L_31 = __this->get_signingWriter_1();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = __this->get_base64Chars_3();
		NullCheck(L_31);
		XmlCanonicalWriter_WriteText_m1E265C6AAE9736F2CEA4DB805525468F6CB48B8C(L_31, L_32, 0, 4, /*hidden argument*/NULL);
		bool L_33 = __this->get_text_4();
		if (!L_33)
		{
			goto IL_00cd;
		}
	}
	{
		XmlNodeWriter_tC80100CF5D90B1F73B36ED65F2DA8398C2415AE5 * L_34 = __this->get_writer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = __this->get_base64Chars_3();
		NullCheck(L_34);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, 4);
	}

IL_00cd:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Xml.XmlStreamNodeWriter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlStreamNodeWriter_get_Position_m0A71F9A95CEAC0ECDF433B9EE92539AB8731CADD (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_stream_0();
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		int32_t L_2 = __this->get_offset_2();
		return ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)L_1))), (int32_t)L_2));
	}
}
// System.Byte[] System.Xml.XmlStreamNodeWriter::GetBuffer(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, int32_t ___count0, int32_t* ___offset1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_offset_2();
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___count0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))) > ((int32_t)((int32_t)512))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t* L_3 = ___offset1;
		int32_t L_4 = V_0;
		*((int32_t*)L_3) = (int32_t)L_4;
		goto IL_001f;
	}

IL_0016:
	{
		VirtActionInvoker0::Invoke(36 /* System.Void System.Xml.XmlStreamNodeWriter::FlushBuffer() */, __this);
		int32_t* L_5 = ___offset1;
		*((int32_t*)L_5) = (int32_t)0;
	}

IL_001f:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get_buffer_1();
		return L_6;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_offset_2();
		int32_t L_1 = ___count0;
		__this->set_offset_2(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::EnsureByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_EnsureByte_mD3180930042141EF7FF43BD8D18734C3CF6AC41E (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_offset_2();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)512))))
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker0::Invoke(36 /* System.Void System.Xml.XmlStreamNodeWriter::FlushBuffer() */, __this);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteByte_m32DB670957501BAFEA6C841962551EA1624C6CB4 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, uint8_t ___b0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		XmlStreamNodeWriter_EnsureByte_mD3180930042141EF7FF43BD8D18734C3CF6AC41E(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_offset_2();
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->set_offset_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___b0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::WriteByte(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___ch0;
		XmlStreamNodeWriter_WriteByte_m32DB670957501BAFEA6C841962551EA1624C6CB4(__this, (uint8_t)(((int32_t)((uint8_t)L_0))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::WriteBytes(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteBytes_m9EFB3AE5A9924B8CE29E9F72021D1D36078843AC (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, uint8_t ___b10, uint8_t ___b21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B2_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B1_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_offset_2();
		V_0 = L_1;
		int32_t L_2 = V_0;
		G_B1_0 = L_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))) < ((int32_t)((int32_t)512))))
		{
			G_B2_0 = L_0;
			goto IL_001f;
		}
	}
	{
		VirtActionInvoker0::Invoke(36 /* System.Void System.Xml.XmlStreamNodeWriter::FlushBuffer() */, __this);
		V_0 = 0;
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = G_B2_0;
		int32_t L_4 = V_0;
		uint8_t L_5 = ___b10;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)L_5);
		int32_t L_6 = V_0;
		uint8_t L_7 = ___b21;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1))), (uint8_t)L_7);
		int32_t L_8 = __this->get_offset_2();
		__this->set_offset_2(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)2)));
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::WriteBytes(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteBytes_mCA8E9330098BA27729D6126A98FBC8E82D56B1E7 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, Il2CppChar ___ch10, Il2CppChar ___ch21, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___ch10;
		Il2CppChar L_1 = ___ch21;
		XmlStreamNodeWriter_WriteBytes_m9EFB3AE5A9924B8CE29E9F72021D1D36078843AC(__this, (uint8_t)(((int32_t)((uint8_t)L_0))), (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::WriteUTF8Char(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteUTF8Char_m2D9E64F6EF412CBDC288D449E5D24CEC5F9946AA (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, int32_t ___ch0, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppChar* V_2 = NULL;
	{
		int32_t L_0 = ___ch0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___ch0;
		XmlStreamNodeWriter_WriteByte_m32DB670957501BAFEA6C841962551EA1624C6CB4(__this, (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		return;
	}

IL_0011:
	{
		int32_t L_2 = ___ch0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)65535))))
		{
			goto IL_002b;
		}
	}
	{
		int8_t* L_3 = (int8_t*) alloca((((uintptr_t)2)));
		memset(L_3, 0, (((uintptr_t)2)));
		V_0 = (Il2CppChar*)(L_3);
		Il2CppChar* L_4 = V_0;
		int32_t L_5 = ___ch0;
		*((int16_t*)L_4) = (int16_t)(((int32_t)((uint16_t)L_5)));
		Il2CppChar* L_6 = V_0;
		XmlStreamNodeWriter_UnsafeWriteUTF8Chars_mCABBF9886CDC5F2014A8841737F60CA31432D0AC(__this, (Il2CppChar*)(Il2CppChar*)L_6, 1, /*hidden argument*/NULL);
		return;
	}

IL_002b:
	{
		int32_t L_7 = ___ch0;
		SurrogateChar__ctor_m780D63D9A07E4A0E86714D8B3E935A360C80A4D7((SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507 *)(&V_1), L_7, /*hidden argument*/NULL);
		int8_t* L_8 = (int8_t*) alloca((((uintptr_t)4)));
		memset(L_8, 0, (((uintptr_t)4)));
		V_2 = (Il2CppChar*)(L_8);
		Il2CppChar* L_9 = V_2;
		Il2CppChar L_10 = SurrogateChar_get_HighChar_mCBA1A2574C2B079EA42EBE514ABD47623D7B78F3((SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507 *)(&V_1), /*hidden argument*/NULL);
		*((int16_t*)L_9) = (int16_t)L_10;
		Il2CppChar* L_11 = V_2;
		Il2CppChar L_12 = SurrogateChar_get_LowChar_m9EEFCCCE9AAC11909DEF5391F1E6DEE5CE411A7A((SurrogateChar_tB60E413BB9A8DA21F13C64834E60707E35A71507 *)(&V_1), /*hidden argument*/NULL);
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, (int32_t)2))) = (int16_t)L_12;
		Il2CppChar* L_13 = V_2;
		XmlStreamNodeWriter_UnsafeWriteUTF8Chars_mCABBF9886CDC5F2014A8841737F60CA31432D0AC(__this, (Il2CppChar*)(Il2CppChar*)L_13, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::WriteUTF8Chars(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars0, int32_t ___charOffset1, int32_t ___charCount2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		int32_t L_0 = ___charCount2;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)512))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = ___charCount2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___chars0;
		int32_t L_4 = ___charOffset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = ___charCount2;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_3, L_4, (RuntimeArray *)(RuntimeArray *)L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___charCount2;
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		VirtActionInvoker0::Invoke(36 /* System.Void System.Xml.XmlStreamNodeWriter::FlushBuffer() */, __this);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_9 = __this->get_stream_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___chars0;
		int32_t L_11 = ___charOffset1;
		int32_t L_12 = ___charCount2;
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, L_11, L_12);
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::WriteUTF8Chars(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_WriteUTF8Chars_m861A301DA9E067C3C046271EC467332ECDF07D24 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = ___value0;
		V_2 = L_3;
		String_t* L_4 = V_2;
		V_1 = (Il2CppChar*)(((uintptr_t)L_4));
		Il2CppChar* L_5 = V_1;
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		Il2CppChar* L_6 = V_1;
		int32_t L_7 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7));
	}

IL_001b:
	{
		Il2CppChar* L_8 = V_1;
		int32_t L_9 = V_0;
		XmlStreamNodeWriter_UnsafeWriteUTF8Chars_mCABBF9886CDC5F2014A8841737F60CA31432D0AC(__this, (Il2CppChar*)(Il2CppChar*)L_8, L_9, /*hidden argument*/NULL);
		V_2 = (String_t*)NULL;
	}

IL_0025:
	{
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::UnsafeWriteUTF8Chars(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_UnsafeWriteUTF8Chars_mCABBF9886CDC5F2014A8841737F60CA31432D0AC (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	{
		goto IL_004b;
	}

IL_0002:
	{
		V_1 = ((int32_t)170);
		Il2CppChar* L_0 = ___chars0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))), (int32_t)2)))));
		if ((!(((uint32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)64512)))) == ((uint32_t)((int32_t)55296)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
	}

IL_0022:
	{
		int32_t L_4 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3)), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_2 = L_5;
		Il2CppChar* L_6 = ___chars0;
		int32_t L_7 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_2;
		int32_t L_9 = V_0;
		int32_t L_10 = XmlStreamNodeWriter_UnsafeGetUTF8Chars_m033CB5E7248442B5683EA55EFC8ED7A6B1771847(__this, (Il2CppChar*)(Il2CppChar*)L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_10, /*hidden argument*/NULL);
		int32_t L_11 = ___charCount1;
		int32_t L_12 = V_1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12));
		Il2CppChar* L_13 = ___chars0;
		int32_t L_14 = V_1;
		___chars0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_14)), (int32_t)2))));
	}

IL_004b:
	{
		int32_t L_15 = ___charCount1;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)170))))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_16 = ___charCount1;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_17 = ___charCount1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)3)), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_4 = L_18;
		Il2CppChar* L_19 = ___chars0;
		int32_t L_20 = ___charCount1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_4;
		int32_t L_22 = V_3;
		int32_t L_23 = XmlStreamNodeWriter_UnsafeGetUTF8Chars_m033CB5E7248442B5683EA55EFC8ED7A6B1771847(__this, (Il2CppChar*)(Il2CppChar*)L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_23, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// System.Int32 System.Xml.XmlStreamNodeWriter::UnsafeGetUTF8Chars(System.Char*,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlStreamNodeWriter_UnsafeGetUTF8Chars_m033CB5E7248442B5683EA55EFC8ED7A6B1771847 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer2, int32_t ___offset3, const RuntimeMethod* method)
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	Il2CppChar* V_4 = NULL;
	Il2CppChar* V_5 = NULL;
	Il2CppChar V_6 = 0x0;
	{
		int32_t L_0 = ___charCount1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer2;
		int32_t L_2 = ___offset3;
		NullCheck(L_1);
		V_1 = (uint8_t*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		uint8_t* L_3 = V_1;
		V_0 = (uint8_t*)(((uintptr_t)L_3));
		uint8_t* L_4 = V_0;
		V_2 = (uint8_t*)L_4;
		uint8_t* L_5 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer2;
		NullCheck(L_6);
		int32_t L_7 = ___offset3;
		V_3 = (uint8_t*)(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), (int32_t)L_7))))));
		Il2CppChar* L_8 = ___chars0;
		int32_t L_9 = ___charCount1;
		V_4 = (Il2CppChar*)(((uintptr_t)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_9)), (int32_t)2))))));
		goto IL_0045;
	}

IL_002a:
	{
		Il2CppChar* L_10 = ___chars0;
		int32_t L_11 = *((uint16_t*)L_10);
		V_6 = L_11;
		Il2CppChar L_12 = V_6;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)128))))
		{
			goto IL_004a;
		}
	}
	{
		uint8_t* L_13 = V_2;
		Il2CppChar L_14 = V_6;
		*((int8_t*)L_13) = (int8_t)(((int32_t)((uint8_t)L_14)));
		uint8_t* L_15 = V_2;
		V_2 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, (int32_t)1));
		Il2CppChar* L_16 = ___chars0;
		___chars0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_16, (int32_t)2));
	}

IL_0045:
	{
		Il2CppChar* L_17 = ___chars0;
		Il2CppChar* L_18 = V_4;
		if ((!(((uintptr_t)L_17) >= ((uintptr_t)L_18))))
		{
			goto IL_002a;
		}
	}

IL_004a:
	{
		Il2CppChar* L_19 = ___chars0;
		Il2CppChar* L_20 = V_4;
		if ((!(((uintptr_t)L_19) < ((uintptr_t)L_20))))
		{
			goto IL_008c;
		}
	}
	{
		Il2CppChar* L_21 = ___chars0;
		V_5 = (Il2CppChar*)L_21;
		goto IL_0059;
	}

IL_0054:
	{
		Il2CppChar* L_22 = ___chars0;
		___chars0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (int32_t)2));
	}

IL_0059:
	{
		Il2CppChar* L_23 = ___chars0;
		Il2CppChar* L_24 = V_4;
		if ((!(((uintptr_t)L_23) < ((uintptr_t)L_24))))
		{
			goto IL_0067;
		}
	}
	{
		Il2CppChar* L_25 = ___chars0;
		int32_t L_26 = *((uint16_t*)L_25);
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0054;
		}
	}

IL_0067:
	{
		uint8_t* L_27 = V_2;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_28 = __this->get_encoding_4();
		Il2CppChar* L_29 = V_5;
		Il2CppChar* L_30 = ___chars0;
		Il2CppChar* L_31 = V_5;
		uint8_t* L_32 = V_2;
		uint8_t* L_33 = V_3;
		uint8_t* L_34 = V_2;
		NullCheck(L_28);
		int32_t L_35 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(28 /* System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, L_28, (Il2CppChar*)(Il2CppChar*)L_29, (((int32_t)((int32_t)(((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_30, (intptr_t)L_31))/(int32_t)2)))))))), (uint8_t*)(uint8_t*)L_32, (((int32_t)((int32_t)(((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_33, (intptr_t)L_34))/(int32_t)1)))))))));
		V_2 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, (int32_t)L_35));
		Il2CppChar* L_36 = ___chars0;
		Il2CppChar* L_37 = V_4;
		if ((!(((uintptr_t)L_36) >= ((uintptr_t)L_37))))
		{
			goto IL_0045;
		}
	}

IL_008c:
	{
		uint8_t* L_38 = V_2;
		uint8_t* L_39 = V_0;
		return (((int32_t)((int32_t)(((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_38, (intptr_t)L_39))/(int32_t)1))))))));
	}

IL_0094:
	{
		return 0;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::FlushBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_FlushBuffer_mD3AB4D0F9C13EBB35E51883019EBFBE8EF13F785 (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_offset_2();
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = __this->get_stream_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buffer_1();
		int32_t L_3 = __this->get_offset_2();
		NullCheck(L_1);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, L_3);
		__this->set_offset_2(0);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_Flush_m1F27EF6B8EDCCEE7B3768C3E9FDDE1E1AE61F38E (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(36 /* System.Void System.Xml.XmlStreamNodeWriter::FlushBuffer() */, __this);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_stream_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter_Close_m7CC5F3BD8D60307BCA0BF042D1353C7C53ACAE0F (XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_stream_0();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->get_ownsStream_3();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = __this->get_stream_0();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_2);
	}

IL_001b:
	{
		__this->set_stream_0((Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *)NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Xml.XmlStreamNodeWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlStreamNodeWriter__cctor_m818BB82B19CC9AA71546D6FD3812201E7DB61E8A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlStreamNodeWriter__cctor_m818BB82B19CC9AA71546D6FD3812201E7DB61E8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE * L_0 = (UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE *)il2cpp_codegen_object_new(UTF8Encoding_t77ED103B749A387EF072C3429F48C91D12CA08DE_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m026030C6C39449C25EC6FA364AA0A49FB3ADCD9E(L_0, (bool)0, (bool)1, /*hidden argument*/NULL);
		((XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29_StaticFields*)il2cpp_codegen_static_fields_for(XmlStreamNodeWriter_t6C6EDBDACCC3463EE538085EF21AFE71633B8F29_il2cpp_TypeInfo_var))->set_UTF8Encoding_5(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] System.Xml.XmlUTF8NodeWriter::GetCharEntityBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* XmlUTF8NodeWriter_GetCharEntityBuffer_mC86D9AE1D2E03B9C0F8B8CB8250A58EB7C5EC92A (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_GetCharEntityBuffer_mC86D9AE1D2E03B9C0F8B8CB8250A58EB7C5EC92A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_entityChars_6();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->set_entityChars_6(L_1);
	}

IL_0015:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_entityChars_6();
		return L_2;
	}
}
// System.Char[] System.Xml.XmlUTF8NodeWriter::GetCharBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* XmlUTF8NodeWriter_GetCharBuffer_m90CA523ACA602D577B1951E302948813D59A53F9 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, int32_t ___charCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_GetCharBuffer_m90CA523ACA602D577B1951E302948813D59A53F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___charCount0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)256))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___charCount0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_1);
		return L_2;
	}

IL_000f:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = __this->get_chars_11();
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_4 = __this->get_chars_11();
		NullCheck(L_4);
		int32_t L_5 = ___charCount0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))) >= ((int32_t)L_5)))
		{
			goto IL_002e;
		}
	}

IL_0022:
	{
		int32_t L_6 = ___charCount0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_7 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_chars_11(L_7);
	}

IL_002e:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = __this->get_chars_11();
		return L_8;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteDeclaration_mEE442E5A27C64F915F7D6E9DA57D6F27E61991BA (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_WriteDeclaration_mEE442E5A27C64F915F7D6E9DA57D6F27E61991BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = __this->get_encoding_10();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->get_utf8Decl_14();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->get_utf8Decl_14();
		NullCheck(L_2);
		XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306(__this, L_1, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->get_startDecl_12();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->get_startDecl_12();
		NullCheck(L_4);
		XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306(__this, L_3, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), /*hidden argument*/NULL);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_5 = __this->get_encoding_10();
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Text.Encoding::get_WebName() */, L_5);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_7 = Encoding_get_BigEndianUnicode_m6CC17642A36943FE038F54729446D7E30D582BDD(/*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Text.Encoding::get_WebName() */, L_7);
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		XmlStreamNodeWriter_WriteUTF8Chars_m861A301DA9E067C3C046271EC467332ECDF07D24(__this, _stringLiteral41C8F3CDB42D08E9E572C874940CA5896DE03DB3, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_0058:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_10 = __this->get_encoding_10();
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Text.Encoding::get_WebName() */, L_10);
		XmlStreamNodeWriter_WriteUTF8Chars_m861A301DA9E067C3C046271EC467332ECDF07D24(__this, L_11, /*hidden argument*/NULL);
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->get_endDecl_13();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = ((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->get_endDecl_13();
		NullCheck(L_13);
		XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306(__this, L_12, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteStartComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteStartComment_m26E3B0B7536B0B07EC5661450FB550796818F900 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, 4, (int32_t*)(&V_0), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)60));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)33));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = L_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)2))), (uint8_t)((int32_t)45));
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)3))), (uint8_t)((int32_t)45));
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteEndComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteEndComment_m06FEDDB5ED4318D3F1EC87BE5634E998023AE3BF (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, 3, (int32_t*)(&V_0), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)45));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)45));
		int32_t L_5 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)2))), (uint8_t)((int32_t)62));
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteComment_m33F31A1045FD54574FCC5FE6BBFA6BF55D8CC77B (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		XmlUTF8NodeWriter_WriteStartComment_m26E3B0B7536B0B07EC5661450FB550796818F900(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text0;
		XmlStreamNodeWriter_WriteUTF8Chars_m861A301DA9E067C3C046271EC467332ECDF07D24(__this, L_0, /*hidden argument*/NULL);
		XmlUTF8NodeWriter_WriteEndComment_m06FEDDB5ED4318D3F1EC87BE5634E998023AE3BF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteStartElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteStartElement_m633BF20D48FD0267C6935B54C8B41ADDD4BC9633 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method)
{
	{
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)60), /*hidden argument*/NULL);
		String_t* L_0 = ___prefix0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___prefix0;
		XmlUTF8NodeWriter_WritePrefix_m363BEFA8269E39C9C1BEE7CEE9E25F22785D311B(__this, L_2, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)58), /*hidden argument*/NULL);
	}

IL_001f:
	{
		String_t* L_3 = ___localName1;
		XmlUTF8NodeWriter_WriteLocalName_mC1931EE08E299931FD3211F99610123E8DA45631(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteStartElement(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteStartElement_mF7E25F103A7EB58C91725901841301CF39571B35 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer3, int32_t ___localNameOffset4, int32_t ___localNameLength5, const RuntimeMethod* method)
{
	{
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)60), /*hidden argument*/NULL);
		int32_t L_0 = ___prefixLength2;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		XmlUTF8NodeWriter_WritePrefix_m00CEC3BA36FCE465F215AEAEEF75B730C623132C(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)58), /*hidden argument*/NULL);
	}

IL_001c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___localNameBuffer3;
		int32_t L_5 = ___localNameOffset4;
		int32_t L_6 = ___localNameLength5;
		XmlUTF8NodeWriter_WriteLocalName_mD6C461567103CD31CA58B51BD3232677BE4A7F3D(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteEndStartElement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteEndStartElement_m13A0340380D018092F1BB59D8A62772D755038CA (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, bool ___isEmpty0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___isEmpty0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)62), /*hidden argument*/NULL);
		return;
	}

IL_000c:
	{
		XmlStreamNodeWriter_WriteBytes_mCA8E9330098BA27729D6126A98FBC8E82D56B1E7(__this, ((int32_t)47), ((int32_t)62), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteEndElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteEndElement_mC58A514394A3919230EBDB41B297E3F7F788E1CA (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method)
{
	{
		XmlStreamNodeWriter_WriteBytes_mCA8E9330098BA27729D6126A98FBC8E82D56B1E7(__this, ((int32_t)60), ((int32_t)47), /*hidden argument*/NULL);
		String_t* L_0 = ___prefix0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___prefix0;
		XmlUTF8NodeWriter_WritePrefix_m363BEFA8269E39C9C1BEE7CEE9E25F22785D311B(__this, L_2, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)58), /*hidden argument*/NULL);
	}

IL_0021:
	{
		String_t* L_3 = ___localName1;
		XmlUTF8NodeWriter_WriteLocalName_mC1931EE08E299931FD3211F99610123E8DA45631(__this, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)62), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteEndElement(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteEndElement_m5A8663E2D9180B1B77BBADBF719298B4F088BB29 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer3, int32_t ___localNameOffset4, int32_t ___localNameLength5, const RuntimeMethod* method)
{
	{
		XmlStreamNodeWriter_WriteBytes_mCA8E9330098BA27729D6126A98FBC8E82D56B1E7(__this, ((int32_t)60), ((int32_t)47), /*hidden argument*/NULL);
		int32_t L_0 = ___prefixLength2;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		XmlUTF8NodeWriter_WritePrefix_m00CEC3BA36FCE465F215AEAEEF75B730C623132C(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)58), /*hidden argument*/NULL);
	}

IL_001e:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___localNameBuffer3;
		int32_t L_5 = ___localNameOffset4;
		int32_t L_6 = ___localNameLength5;
		XmlUTF8NodeWriter_WriteLocalName_mD6C461567103CD31CA58B51BD3232677BE4A7F3D(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)62), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteStartXmlnsAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteStartXmlnsAttribute_m9039097F31999620B44BED7DB647446D49A6DF1A (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, 6, (int32_t*)(&V_0), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)32));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)120));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = L_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)2))), (uint8_t)((int32_t)109));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)3))), (uint8_t)((int32_t)108));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = L_7;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)4))), (uint8_t)((int32_t)110));
		int32_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)5))), (uint8_t)((int32_t)115));
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, 6, /*hidden argument*/NULL);
		__this->set_inAttribute_9((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteXmlnsAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteXmlnsAttribute_m433D0618832E97BF6F2985ADEB9884D929207AD5 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___prefix0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		XmlUTF8NodeWriter_WriteStartXmlnsAttribute_m9039097F31999620B44BED7DB647446D49A6DF1A(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___prefix0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)58), /*hidden argument*/NULL);
		String_t* L_2 = ___prefix0;
		XmlUTF8NodeWriter_WritePrefix_m363BEFA8269E39C9C1BEE7CEE9E25F22785D311B(__this, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		XmlStreamNodeWriter_WriteBytes_mCA8E9330098BA27729D6126A98FBC8E82D56B1E7(__this, ((int32_t)61), ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_3 = ___ns1;
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Xml.XmlNodeWriter::WriteEscapedText(System.String) */, __this, L_3);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlNodeWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteXmlnsAttribute(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteXmlnsAttribute_mCAD6C487EF5E8104BF9F179FE54AB32DDFA2216C (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___nsBuffer3, int32_t ___nsOffset4, int32_t ___nsLength5, const RuntimeMethod* method)
{
	{
		XmlUTF8NodeWriter_WriteStartXmlnsAttribute_m9039097F31999620B44BED7DB647446D49A6DF1A(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___prefixLength2;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)58), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		XmlUTF8NodeWriter_WritePrefix_m00CEC3BA36FCE465F215AEAEEF75B730C623132C(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_001a:
	{
		XmlStreamNodeWriter_WriteBytes_mCA8E9330098BA27729D6126A98FBC8E82D56B1E7(__this, ((int32_t)61), ((int32_t)34), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___nsBuffer3;
		int32_t L_5 = ___nsOffset4;
		int32_t L_6 = ___nsLength5;
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(21 /* System.Void System.Xml.XmlNodeWriter::WriteEscapedText(System.Byte[],System.Int32,System.Int32) */, __this, L_4, L_5, L_6);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlNodeWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteStartAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteStartAttribute_m2545208C4968D0F573E76DF5B9DC70FE0F32D8FA (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___prefix0, String_t* ___localName1, const RuntimeMethod* method)
{
	{
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)32), /*hidden argument*/NULL);
		String_t* L_0 = ___prefix0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___prefix0;
		XmlUTF8NodeWriter_WritePrefix_m363BEFA8269E39C9C1BEE7CEE9E25F22785D311B(__this, L_2, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)58), /*hidden argument*/NULL);
	}

IL_001f:
	{
		String_t* L_3 = ___localName1;
		XmlUTF8NodeWriter_WriteLocalName_mC1931EE08E299931FD3211F99610123E8DA45631(__this, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteBytes_mCA8E9330098BA27729D6126A98FBC8E82D56B1E7(__this, ((int32_t)61), ((int32_t)34), /*hidden argument*/NULL);
		__this->set_inAttribute_9((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteStartAttribute(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteStartAttribute_m2AA5C5AF9CD61F3DE79502DABDD8259446A904C6 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer3, int32_t ___localNameOffset4, int32_t ___localNameLength5, const RuntimeMethod* method)
{
	{
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)32), /*hidden argument*/NULL);
		int32_t L_0 = ___prefixLength2;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		int32_t L_3 = ___prefixLength2;
		XmlUTF8NodeWriter_WritePrefix_m00CEC3BA36FCE465F215AEAEEF75B730C623132C(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)58), /*hidden argument*/NULL);
	}

IL_001c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___localNameBuffer3;
		int32_t L_5 = ___localNameOffset4;
		int32_t L_6 = ___localNameLength5;
		XmlUTF8NodeWriter_WriteLocalName_mD6C461567103CD31CA58B51BD3232677BE4A7F3D(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteBytes_mCA8E9330098BA27729D6126A98FBC8E82D56B1E7(__this, ((int32_t)61), ((int32_t)34), /*hidden argument*/NULL);
		__this->set_inAttribute_9((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteEndAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteEndAttribute_m367E3300F9E7FF85B895F568B6F9B50A96FD7447 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	{
		XmlStreamNodeWriter_WriteByte_mBAF5F137C9FC272F276082B7BC388CD426FEFD4B(__this, ((int32_t)34), /*hidden argument*/NULL);
		__this->set_inAttribute_9((bool)0);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WritePrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WritePrefix_m363BEFA8269E39C9C1BEE7CEE9E25F22785D311B (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_2 = ___prefix0;
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_2, 0, /*hidden argument*/NULL);
		XmlStreamNodeWriter_WriteUTF8Char_m2D9E64F6EF412CBDC288D449E5D24CEC5F9946AA(__this, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		String_t* L_4 = ___prefix0;
		XmlStreamNodeWriter_WriteUTF8Chars_m861A301DA9E067C3C046271EC467332ECDF07D24(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WritePrefix(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WritePrefix_m00CEC3BA36FCE465F215AEAEEF75B730C623132C (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___prefixBuffer0, int32_t ___prefixOffset1, int32_t ___prefixLength2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___prefixLength2;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___prefixBuffer0;
		int32_t L_2 = ___prefixOffset1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		XmlStreamNodeWriter_WriteUTF8Char_m2D9E64F6EF412CBDC288D449E5D24CEC5F9946AA(__this, L_4, /*hidden argument*/NULL);
		return;
	}

IL_000e:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___prefixBuffer0;
		int32_t L_6 = ___prefixOffset1;
		int32_t L_7 = ___prefixLength2;
		XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteLocalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteLocalName_mC1931EE08E299931FD3211F99610123E8DA45631 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___localName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		XmlStreamNodeWriter_WriteUTF8Chars_m861A301DA9E067C3C046271EC467332ECDF07D24(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteLocalName(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteLocalName_mD6C461567103CD31CA58B51BD3232677BE4A7F3D (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___localNameBuffer0, int32_t ___localNameOffset1, int32_t ___localNameLength2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___localNameBuffer0;
		int32_t L_1 = ___localNameOffset1;
		int32_t L_2 = ___localNameLength2;
		XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteEscapedText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteEscapedText_mFC115DAABEA2F8182493C84271A6F73A2AC67001 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = ___s0;
		V_2 = L_3;
		String_t* L_4 = V_2;
		V_1 = (Il2CppChar*)(((uintptr_t)L_4));
		Il2CppChar* L_5 = V_1;
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		Il2CppChar* L_6 = V_1;
		int32_t L_7 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7));
	}

IL_001b:
	{
		Il2CppChar* L_8 = V_1;
		int32_t L_9 = V_0;
		XmlUTF8NodeWriter_UnsafeWriteEscapedText_m9E4C3542F35A3F08D914F434B8051A553E41539F(__this, (Il2CppChar*)(Il2CppChar*)L_8, L_9, /*hidden argument*/NULL);
		V_2 = (String_t*)NULL;
	}

IL_0025:
	{
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteEscapedText(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteEscapedText_m7205CF208876BAADAA88A833E8B2D3383C6836BC (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___s0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	{
		int32_t L_0 = ___count2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___s0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		V_1 = (Il2CppChar*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		Il2CppChar* L_3 = V_1;
		V_0 = (Il2CppChar*)(((uintptr_t)L_3));
		Il2CppChar* L_4 = V_0;
		int32_t L_5 = ___count2;
		XmlUTF8NodeWriter_UnsafeWriteEscapedText_m9E4C3542F35A3F08D914F434B8051A553E41539F(__this, (Il2CppChar*)(Il2CppChar*)L_4, L_5, /*hidden argument*/NULL);
		V_1 = (Il2CppChar*)(((uintptr_t)0));
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::UnsafeWriteEscapedText(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_UnsafeWriteEscapedText_m9E4C3542F35A3F08D914F434B8051A553E41539F (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* G_B3_0 = NULL;
	{
		bool L_0 = __this->get_inAttribute_9();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_1 = __this->get_isEscapedElementChar_8();
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_2 = __this->get_isEscapedAttributeChar_7();
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_3 = V_0;
		NullCheck(L_3);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = 0;
		V_3 = 0;
		goto IL_005d;
	}

IL_0021:
	{
		Il2CppChar* L_4 = ___chars0;
		int32_t L_5 = V_3;
		int32_t L_6 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_5)), (int32_t)2)))));
		V_4 = L_6;
		Il2CppChar L_7 = V_4;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0035;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_9 = V_0;
		Il2CppChar L_10 = V_4;
		NullCheck(L_9);
		Il2CppChar L_11 = L_10;
		uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if (L_12)
		{
			goto IL_003e;
		}
	}

IL_0035:
	{
		Il2CppChar L_13 = V_4;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)65534))))
		{
			goto IL_0059;
		}
	}

IL_003e:
	{
		Il2CppChar* L_14 = ___chars0;
		int32_t L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = V_2;
		XmlStreamNodeWriter_UnsafeWriteUTF8Chars_mCABBF9886CDC5F2014A8841737F60CA31432D0AC(__this, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_15)), (int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		Il2CppChar L_18 = V_4;
		VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Xml.XmlNodeWriter::WriteCharEntity(System.Int32) */, __this, L_18);
		int32_t L_19 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0059:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = ___count1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0021;
		}
	}
	{
		Il2CppChar* L_23 = ___chars0;
		int32_t L_24 = V_2;
		int32_t L_25 = ___count1;
		int32_t L_26 = V_2;
		XmlStreamNodeWriter_UnsafeWriteUTF8Chars_mCABBF9886CDC5F2014A8841737F60CA31432D0AC(__this, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_23, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_24)), (int32_t)2)))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteEscapedText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteEscapedText_m5122B1A2E0377E555A4F5E1EB8E73271F28682FF (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* G_B3_0 = NULL;
	XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * G_B14_0 = NULL;
	XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * G_B15_1 = NULL;
	{
		bool L_0 = __this->get_inAttribute_9();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_1 = __this->get_isEscapedElementChar_8();
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_2 = __this->get_isEscapedAttributeChar_7();
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_3 = V_0;
		NullCheck(L_3);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = 0;
		V_3 = 0;
		goto IL_00bb;
	}

IL_0024:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___chars0;
		int32_t L_5 = ___offset1;
		int32_t L_6 = V_3;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		uint8_t L_9 = V_4;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_11 = V_0;
		uint8_t L_12 = V_4;
		NullCheck(L_11);
		uint8_t L_13 = L_12;
		uint8_t L_14 = (uint8_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = ___chars0;
		int32_t L_16 = ___offset1;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306(__this, L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), /*hidden argument*/NULL);
		uint8_t L_20 = V_4;
		VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Xml.XmlNodeWriter::WriteCharEntity(System.Int32) */, __this, L_20);
		int32_t L_21 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		goto IL_00b7;
	}

IL_0051:
	{
		uint8_t L_22 = V_4;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_23 = ___offset1;
		int32_t L_24 = V_3;
		int32_t L_25 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24)), (int32_t)2))) >= ((int32_t)L_25)))
		{
			goto IL_00b7;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = ___chars0;
		int32_t L_27 = ___offset1;
		int32_t L_28 = V_3;
		NullCheck(L_26);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)), (int32_t)1));
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = ___chars0;
		int32_t L_32 = ___offset1;
		int32_t L_33 = V_3;
		NullCheck(L_31);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), (int32_t)2));
		uint8_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_5 = L_35;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_00b7;
		}
	}
	{
		uint8_t L_36 = V_5;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)190))))
		{
			goto IL_008b;
		}
	}
	{
		uint8_t L_37 = V_5;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_00b7;
		}
	}

IL_008b:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = ___chars0;
		int32_t L_39 = ___offset1;
		int32_t L_40 = V_2;
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306(__this, L_38, ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_42)), /*hidden argument*/NULL);
		uint8_t L_43 = V_5;
		G_B13_0 = __this;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)190))))
		{
			G_B14_0 = __this;
			goto IL_00a9;
		}
	}
	{
		G_B15_0 = ((int32_t)65535);
		G_B15_1 = G_B13_0;
		goto IL_00ae;
	}

IL_00a9:
	{
		G_B15_0 = ((int32_t)65534);
		G_B15_1 = G_B14_0;
	}

IL_00ae:
	{
		NullCheck(G_B15_1);
		VirtActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Xml.XmlNodeWriter::WriteCharEntity(System.Int32) */, G_B15_1, G_B15_0);
		int32_t L_44 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)3));
	}

IL_00b7:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00bb:
	{
		int32_t L_46 = V_3;
		int32_t L_47 = ___count2;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_48 = ___chars0;
		int32_t L_49 = ___offset1;
		int32_t L_50 = V_2;
		int32_t L_51 = ___count2;
		int32_t L_52 = V_2;
		XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306(__this, L_48, ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_52)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteText_mCB60E6A3F0FC0734ED3E493656B22A65268D581B (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, int32_t ___ch0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___ch0;
		XmlStreamNodeWriter_WriteUTF8Char_m2D9E64F6EF412CBDC288D449E5D24CEC5F9946AA(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteText_mBEFA62676C8BF3B0B3646A1FF5BB66E2837052DE (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___chars0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteText(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteText_m6B9BB5A217509CEBD45E524820835BBCA33513C9 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	{
		int32_t L_0 = ___count2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___chars0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		V_1 = (Il2CppChar*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		Il2CppChar* L_3 = V_1;
		V_0 = (Il2CppChar*)(((uintptr_t)L_3));
		Il2CppChar* L_4 = V_0;
		int32_t L_5 = ___count2;
		XmlStreamNodeWriter_UnsafeWriteUTF8Chars_mCABBF9886CDC5F2014A8841737F60CA31432D0AC(__this, (Il2CppChar*)(Il2CppChar*)L_4, L_5, /*hidden argument*/NULL);
		V_1 = (Il2CppChar*)(((uintptr_t)0));
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteText_m8C8E2BD829872076040BF4AA1738DCB4FC1512D0 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		XmlStreamNodeWriter_WriteUTF8Chars_m861A301DA9E067C3C046271EC467332ECDF07D24(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteLessThanCharEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteLessThanCharEntity_m2B244D6CC22F4862F0192669731DE0B35CAA10B0 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, 4, (int32_t*)(&V_0), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)38));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)108));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = L_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)2))), (uint8_t)((int32_t)116));
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)3))), (uint8_t)((int32_t)59));
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteGreaterThanCharEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteGreaterThanCharEntity_m8AD4AD059DBBD0C8359474F3B2076D152BA0B782 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, 4, (int32_t*)(&V_0), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)38));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)103));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = L_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)2))), (uint8_t)((int32_t)116));
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)3))), (uint8_t)((int32_t)59));
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteAmpersandCharEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteAmpersandCharEntity_m4DB776AF23C017EC2BDB146EF741B57598D4ABDF (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, 5, (int32_t*)(&V_0), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)38));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)97));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = L_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)2))), (uint8_t)((int32_t)109));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)3))), (uint8_t)((int32_t)112));
		int32_t L_9 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)4))), (uint8_t)((int32_t)59));
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, 5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteApostropheCharEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteApostropheCharEntity_m210A93AD572096B2EA953ABAD600F71FDAD3A19B (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, 6, (int32_t*)(&V_0), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)38));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)97));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = L_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)2))), (uint8_t)((int32_t)112));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)3))), (uint8_t)((int32_t)111));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = L_7;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)4))), (uint8_t)((int32_t)115));
		int32_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)5))), (uint8_t)((int32_t)59));
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, 6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteQuoteCharEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteQuoteCharEntity_mD3888FE9E0CD27A410C360DF55F2F4C1D6DE2C3F (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, 6, (int32_t*)(&V_0), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)38));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)((int32_t)113));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = L_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)2))), (uint8_t)((int32_t)117));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)3))), (uint8_t)((int32_t)111));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = L_7;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)4))), (uint8_t)((int32_t)116));
		int32_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)5))), (uint8_t)((int32_t)59));
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, 6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteHexCharEntity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteHexCharEntity_m15AFE743169DEACC0777F0A18C54B4EC92B6B7E1 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, int32_t ___ch0, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlUTF8NodeWriter_GetCharEntityBuffer_mC86D9AE1D2E03B9C0F8B8CB8250A58EB7C5EC92A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = ((int32_t)32);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		V_1 = L_3;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)59));
		int32_t L_4 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = ___ch0;
		int32_t L_8 = XmlUTF8NodeWriter_ToBase16_m3BB4B78DA0E3C160A705A4C0FB1814B25FFE6468(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_8));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		V_1 = L_11;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)((int32_t)120));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		V_1 = L_14;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)35));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		V_1 = L_17;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)38));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = V_1;
		XmlStreamNodeWriter_WriteUTF8Chars_mA38F12099C5E03DE1DE134A345B9557A600AA306(__this, L_18, L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_20)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteCharEntity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteCharEntity_m667F3DF645F700C11F47C53C95AE22312D1BB9E2 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, int32_t ___ch0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___ch0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)38))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___ch0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)34))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_2 = ___ch0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)38))))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0045;
	}

IL_0011:
	{
		int32_t L_3 = ___ch0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_4 = ___ch0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)60))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = ___ch0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)62))))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_0045;
	}

IL_0022:
	{
		XmlUTF8NodeWriter_WriteLessThanCharEntity_m2B244D6CC22F4862F0192669731DE0B35CAA10B0(__this, /*hidden argument*/NULL);
		return;
	}

IL_0029:
	{
		XmlUTF8NodeWriter_WriteGreaterThanCharEntity_m8AD4AD059DBBD0C8359474F3B2076D152BA0B782(__this, /*hidden argument*/NULL);
		return;
	}

IL_0030:
	{
		XmlUTF8NodeWriter_WriteAmpersandCharEntity_m4DB776AF23C017EC2BDB146EF741B57598D4ABDF(__this, /*hidden argument*/NULL);
		return;
	}

IL_0037:
	{
		XmlUTF8NodeWriter_WriteApostropheCharEntity_m210A93AD572096B2EA953ABAD600F71FDAD3A19B(__this, /*hidden argument*/NULL);
		return;
	}

IL_003e:
	{
		XmlUTF8NodeWriter_WriteQuoteCharEntity_mD3888FE9E0CD27A410C360DF55F2F4C1D6DE2C3F(__this, /*hidden argument*/NULL);
		return;
	}

IL_0045:
	{
		int32_t L_6 = ___ch0;
		XmlUTF8NodeWriter_WriteHexCharEntity_m15AFE743169DEACC0777F0A18C54B4EC92B6B7E1(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XmlUTF8NodeWriter::ToBase16(System.Byte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8NodeWriter_ToBase16_m3BB4B78DA0E3C160A705A4C0FB1814B25FFE6468 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chars0, int32_t ___offset1, uint32_t ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_ToBase16_m3BB4B78DA0E3C160A705A4C0FB1814B25FFE6468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___chars0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		___offset1 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->get_digits_15();
		uint32_t L_5 = ___value2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)((int32_t)L_5&(int32_t)((int32_t)15)));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_7);
		uint32_t L_8 = ___value2;
		___value2 = ((int32_t)((uint32_t)(int32_t)L_8/(uint32_t)(int32_t)((int32_t)16)));
		uint32_t L_9 = ___value2;
		if (L_9)
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteDecimalText(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteDecimalText_mC21DF458A4C4E236CC9D5DCEFAED39B76D24346A (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_WriteDecimalText_mC21DF458A4C4E236CC9D5DCEFAED39B76D24346A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, ((int32_t)40), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_4 = XmlConverter_ToChars_mDE762853FBC05A7BA94BD23B584CB047532B902E(L_1, L_2, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteDoubleText(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteDoubleText_m91DDB99AAD2BC8E43C1E5C13838AAE89CB1E45FA (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_WriteDoubleText_m91DDB99AAD2BC8E43C1E5C13838AAE89CB1E45FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, ((int32_t)32), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		double L_1 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_4 = XmlConverter_ToChars_mF58DA46065CE4058E30F8C2581EE015187404FF2(L_1, L_2, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteFloatText(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteFloatText_mCEF8F9563FE701FC5384845A7F931C9A9473FD1C (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_WriteFloatText_mCEF8F9563FE701FC5384845A7F931C9A9473FD1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, ((int32_t)16), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		float L_1 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_4 = XmlConverter_ToChars_m7C184C40D054A50646F4972B5FC5DA0A9098E8D5(L_1, L_2, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteDateTimeText(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteDateTimeText_m3FFEC3685682F903401F3C0AC46EABD31B916230 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_WriteDateTimeText_m3FFEC3685682F903401F3C0AC46EABD31B916230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, ((int32_t)64), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_4 = XmlConverter_ToChars_m974365FC014734B71EF291A2188A8568F76FB2E9(L_1, L_2, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteUniqueIdText(System.Xml.UniqueId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteUniqueIdText_mACB6EF9336D6A8CA9AC7641F8F947F787540273C (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_1 = NULL;
	{
		UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * L_0 = ___value0;
		NullCheck(L_0);
		bool L_1 = UniqueId_get_IsGuid_m42F929E1369AC17191B16055A04116CADAA73251(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3 = UniqueId_get_CharArrayLength_m2F3E2C5B4F8416525F5F790203A964F0BC9E226A(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = XmlUTF8NodeWriter_GetCharBuffer_m90CA523ACA602D577B1951E302948813D59A53F9(__this, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * L_6 = ___value0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_7 = V_1;
		NullCheck(L_6);
		UniqueId_ToCharArray_mA54CC947FC6658E6516535BF5BC328E5F227DF0F(L_6, L_7, 0, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = V_1;
		int32_t L_9 = V_0;
		VirtActionInvoker3< CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*, int32_t, int32_t >::Invoke(23 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.Char[],System.Int32,System.Int32) */, __this, L_8, 0, L_9);
		return;
	}

IL_002a:
	{
		UniqueId_t456811268D65C207EE9D47C0B52D305A4D14F01A * L_10 = ___value0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Xml.XmlNodeWriter::WriteEscapedText(System.String) */, __this, L_11);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteInt32Text(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteInt32Text_m079C1CB89FF09378652CAF3FB6ED8027677E1AE4 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_WriteInt32Text_m079C1CB89FF09378652CAF3FB6ED8027677E1AE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, ((int32_t)16), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_4 = XmlConverter_ToChars_m76527E4539FA08D5F960F07BB6533A86B638827A(L_1, L_2, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteInt64Text(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteInt64Text_m93682F519D633DBBAD81E23093FC7AD18A1D0E2E (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_WriteInt64Text_m93682F519D633DBBAD81E23093FC7AD18A1D0E2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, ((int32_t)32), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		int64_t L_1 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_4 = XmlConverter_ToChars_mC4517ABB1158A183F61BD276E13AA8B9A810D3B0(L_1, L_2, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteUInt64Text(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteUInt64Text_m9AB703E6B787CEC52221B3B091ECB400E69F5D61 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_WriteUInt64Text_m9AB703E6B787CEC52221B3B091ECB400E69F5D61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, ((int32_t)32), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		uint64_t L_1 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		int32_t L_4 = XmlConverter_ToChars_m53EC6E9A18A98DBBD73B9BBBDE796B55D3BBFA7F(L_1, L_2, L_3, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteGuidText(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteGuidText_mCD7333E52E19E6D7E055BB2CE8F21DE031CEDA57 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&___value0), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.String) */, __this, L_0);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteBase64Text(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteBase64Text_m9B5B09E4BB4A1187F029EB4E7458A856C9AD8795 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___trailBytes0, int32_t ___trailByteCount1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer2, int32_t ___offset3, int32_t ___count4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___trailByteCount1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___trailBytes0;
		int32_t L_2 = ___trailByteCount1;
		XmlUTF8NodeWriter_InternalWriteBase64Text_mB8AADFB26D6E521E83C53144BF69496B185356D2(__this, L_1, 0, L_2, /*hidden argument*/NULL);
	}

IL_000d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer2;
		int32_t L_4 = ___offset3;
		int32_t L_5 = ___count4;
		XmlUTF8NodeWriter_InternalWriteBase64Text_mB8AADFB26D6E521E83C53144BF69496B185356D2(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::InternalWriteBase64Text(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_InternalWriteBase64Text_mB8AADFB26D6E521E83C53144BF69496B185356D2 (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_InternalWriteBase64Text_mB8AADFB26D6E521E83C53144BF69496B185356D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_6 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlConverter_t410A5FC7C7C1A5D99C44958E297E79C374F46F75_il2cpp_TypeInfo_var);
		Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * L_0 = XmlConverter_get_Base64Encoding_m4D5EEA53C5F298A0D44CA25FA32D7030AEB25EDC(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0045;
	}

IL_0008:
	{
		int32_t L_1 = ___count2;
		int32_t L_2 = ___count2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_3 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525(((int32_t)384), ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)((int32_t)L_2%(int32_t)3)))), /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)3)), (int32_t)4));
		int32_t L_5 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, L_5, (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_4 = L_6;
		Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * L_7 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___buffer0;
		int32_t L_9 = ___offset1;
		int32_t L_10 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_7);
		int32_t L_13 = Base64Encoding_GetChars_mF9732308F8D03D48B4C6CE8E0346FB6EAC117DB0(L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_13, /*hidden argument*/NULL);
		int32_t L_14 = ___offset1;
		int32_t L_15 = V_1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15));
		int32_t L_16 = ___count2;
		int32_t L_17 = V_1;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17));
	}

IL_0045:
	{
		int32_t L_18 = ___count2;
		if ((((int32_t)L_18) >= ((int32_t)3)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_19 = ___count2;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = XmlStreamNodeWriter_GetBuffer_mA5FDA2829F0717C0836DB82DFE31A8E09680578B(__this, 4, (int32_t*)(&V_5), /*hidden argument*/NULL);
		V_6 = L_20;
		Base64Encoding_tCEED1772277CB35B5DA7BA3E7EF411F82A261358 * L_21 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ___buffer0;
		int32_t L_23 = ___offset1;
		int32_t L_24 = ___count2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = V_6;
		int32_t L_26 = V_5;
		NullCheck(L_21);
		int32_t L_27 = Base64Encoding_GetChars_mF9732308F8D03D48B4C6CE8E0346FB6EAC117DB0(L_21, L_22, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		XmlStreamNodeWriter_Advance_m662A40DF871DD441C048910FC56F3B4AD1F9D956(__this, L_27, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::WriteTimeSpanText(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter_WriteTimeSpanText_m5CFC3CE0753B2CFCF055AD8CF30BD3D6F84C2F9B (XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1 * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter_WriteTimeSpanText_m5CFC3CE0753B2CFCF055AD8CF30BD3D6F84C2F9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t0ED1642D9D0E4F0F7CB233F75C42460578F8ABF7_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_mC300716D816BD9BB575D540C1417D0152BB059ED(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Xml.XmlNodeWriter::WriteText(System.String) */, __this, L_1);
		return;
	}
}
// System.Void System.Xml.XmlUTF8NodeWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8NodeWriter__cctor_mC9246FE4D114AD65B14286E85292A18A4280278F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8NodeWriter__cctor_mC9246FE4D114AD65B14286E85292A18A4280278F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____2A819C73D5892FC12A45F8232E1E03B764F9EB84_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->set_startDecl_12(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____364A37E6F67B6074B93346D4E369336F4433B1C5_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->set_endDecl_13(L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)38));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_6;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____CD0295D6D69F945B4B3C7D09BEDB2D10B0883CDC_13_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->set_utf8Decl_14(L_7);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = L_9;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____CE27CB141098FEB00714E758646BE3E99C185B71_14_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->set_digits_15(L_10);
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_12 = (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)SZArrayNew(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_13 = L_12;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____71599C20F1747A39DEDFB726ADBFA0E04AA71448_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->set_defaultIsEscapedAttributeChar_16(L_13);
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_15 = (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)SZArrayNew(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_16 = L_15;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____DCC1E88AA44895E53932C0DE79C8AF42EB190A95_15_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8NodeWriter_tDEBF83309438DDB6233E86D4A6BEFC4FBDFA37D1_il2cpp_TypeInfo_var))->set_defaultIsEscapedElementChar_17(L_16);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlUTF8TextReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader__ctor_m32110B5DF83B08E99CCD1881CFC2C232BDB5936A (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader__ctor_m32110B5DF83B08E99CCD1881CFC2C232BDB5936A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlBaseReader_tD0B53CE573796EB78062F045986EAA26DBFCA269_il2cpp_TypeInfo_var);
		XmlBaseReader__ctor_m599F29ECD263FF806E3124C63E1ABC9D28D116AC(__this, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_0 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_1 = (PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 *)il2cpp_codegen_object_new(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93_il2cpp_TypeInfo_var);
		PrefixHandle__ctor_mBCC5029DB6C3DD2C3F12BFC1E7036A2CCAF68AF0(L_1, L_0, /*hidden argument*/NULL);
		__this->set_prefix_40(L_1);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_2 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_3 = (StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE *)il2cpp_codegen_object_new(StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE_il2cpp_TypeInfo_var);
		StringHandle__ctor_mB15B96EB0897C852B3AED43D1177D311FAE771A6(L_3, L_2, /*hidden argument*/NULL);
		__this->set_localName_41(L_3);
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::SetInput(System.IO.Stream,System.Text.Encoding,System.Xml.XmlDictionaryReaderQuotas,System.Xml.OnXmlDictionaryReaderClose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_SetInput_m60EE9A1F04BA4855BE0330CB4C06EC995E145596 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding1, XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * ___quotas2, OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * ___onClose3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_SetInput_m60EE9A1F04BA4855BE0330CB4C06EC995E145596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = ExceptionUtility_ThrowHelperArgumentNull_m92E997E346B3768C4ADA9231CEB35BF503C0204C(_stringLiteralC82E3D7279EFA3ECA576370AF952C815D48CE41F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlUTF8TextReader_SetInput_m60EE9A1F04BA4855BE0330CB4C06EC995E145596_RuntimeMethod_var);
	}

IL_000e:
	{
		XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * L_2 = ___quotas2;
		OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * L_3 = ___onClose3;
		XmlUTF8TextReader_MoveToInitial_m96A60475EAB096562EED7F1FB7CF61C73360CD9C(__this, L_2, L_3, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = ___stream0;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_5 = ___encoding1;
		EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1 * L_6 = (EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1 *)il2cpp_codegen_object_new(EncodingStreamWrapper_t7A6364889CFCCF388BC99E05DBC5783FCBAD58F1_il2cpp_TypeInfo_var);
		EncodingStreamWrapper__ctor_m9221FD590E4AC0AD1893398EE4D33ACEA97A2E8D(L_6, L_4, L_5, /*hidden argument*/NULL);
		___stream0 = L_6;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_7 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_8 = ___stream0;
		NullCheck(L_7);
		XmlBufferReader_SetBuffer_m5439B338B5CA1B601F66AE2B0C8262499E0A357C(L_7, L_8, (RuntimeObject*)NULL, (XmlBinaryReaderSession_t8DAB759A1EC252C96B05AE26AAC29C85358C4D60 *)NULL, /*hidden argument*/NULL);
		__this->set_buffered_44((bool)0);
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::MoveToInitial(System.Xml.XmlDictionaryReaderQuotas,System.Xml.OnXmlDictionaryReaderClose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_MoveToInitial_m96A60475EAB096562EED7F1FB7CF61C73360CD9C (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * ___quotas0, OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * ___onClose1, const RuntimeMethod* method)
{
	{
		XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * L_0 = ___quotas0;
		XmlBaseReader_MoveToInitial_m77E06CF0CB82B42106CFBBE3AC47AA0F6D189375(__this, L_0, /*hidden argument*/NULL);
		XmlDictionaryReaderQuotas_tAADAD3C6BDB4F9657C649831D3A3B77A05F3DAE2 * L_1 = ___quotas0;
		NullCheck(L_1);
		int32_t L_2 = XmlDictionaryReaderQuotas_get_MaxBytesPerRead_m3990F214AE6B58B7E6AFB9C3A12B7C83866A4F4A(L_1, /*hidden argument*/NULL);
		__this->set_maxBytesPerRead_45(L_2);
		OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * L_3 = ___onClose1;
		__this->set_onClose_43(L_3);
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_Close_m52B586931E63B2B8578793F8D53A5C262AFEC478 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_Close_m52B586931E63B2B8578793F8D53A5C262AFEC478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Exception_t * G_B4_0 = NULL;
	Exception_t * G_B3_0 = NULL;
	{
		__this->set_rowOffsets_42((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)NULL);
		XmlBaseReader_Close_m68F0A95CE2A545033A7BE7573A7567A843F24CB8(__this, /*hidden argument*/NULL);
		OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * L_0 = __this->get_onClose_43();
		V_0 = L_0;
		__this->set_onClose_43((OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 *)NULL);
		OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		OnXmlDictionaryReaderClose_tF34415281DE188001D0E330A13F5DB50334ED240 * L_2 = V_0;
		NullCheck(L_2);
		OnXmlDictionaryReaderClose_Invoke_m99E166C0D4716B05480231A81FF4D44662617BC4(L_2, __this, /*hidden argument*/NULL);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0027;
		throw e;
	}

CATCH_0027:
	{ // begin catch(System.Exception)
		{
			Exception_t * L_3 = ((Exception_t *)__exception_local);
			bool L_4 = Fx_IsFatal_m735CE6CF279A43E6EEF1AF70936E519FF0E9C949(L_3, /*hidden argument*/NULL);
			G_B3_0 = L_3;
			if (!L_4)
			{
				G_B4_0 = L_3;
				goto IL_0031;
			}
		}

IL_002f:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlUTF8TextReader_Close_m52B586931E63B2B8578793F8D53A5C262AFEC478_RuntimeMethod_var);
		}

IL_0031:
		{
			Exception_t * L_5 = ExceptionUtility_ThrowHelperCallback_m84C6B9F2F155631EFAAF0001C5F9B68363B1DDCD(G_B4_0, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, XmlUTF8TextReader_Close_m52B586931E63B2B8578793F8D53A5C262AFEC478_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_0037:
	{
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::SkipWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_SkipWhitespace_m06EE0DC2495B4BDBEC80B2AC96690512FF4B96C4 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_SkipWhitespace_m06EE0DC2495B4BDBEC80B2AC96690512FF4B96C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_000d;
	}

IL_0002:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_0 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_0, /*hidden argument*/NULL);
	}

IL_000d:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_1 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = XmlBufferReader_get_EndOfFile_mC4BD439D86BB6F26A5E9CCAFA30D4D24A1FE144E(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_4 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		uint8_t L_5 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		uint8_t L_6 = L_5;
		uint8_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if (((int32_t)((int32_t)L_7&(int32_t)4)))
		{
			goto IL_0002;
		}
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadDeclaration_m29F7BF6CF24F8A868E1051D761954AE3DF49D0DF (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadDeclaration_m29F7BF6CF24F8A868E1051D761954AE3DF49D0DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	{
		bool L_0 = __this->get_buffered_44();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		XmlUTF8TextReader_BufferElement_m0FDB082B7B2909342770933644526DF6138D8C3A(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_1 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = XmlBufferReader_GetBuffer_mA8D442CFFAA68D23D6A6C86B1953D35269ADAFE7(L_1, 5, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)120)))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_1;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)2));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)109)))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)3));
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = V_1;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)4));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		uint8_t L_24 = L_23;
		uint8_t L_25 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if (((int32_t)((int32_t)L_25&(int32_t)4)))
		{
			goto IL_0054;
		}
	}

IL_004e:
	{
		XmlExceptionHelper_ThrowProcessingInstructionNotSupported_m70855EA2441FB2BA32CF3DAD46F912D91BBD10FC(__this, /*hidden argument*/NULL);
	}

IL_0054:
	{
		XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * L_26 = XmlBaseReader_get_Node_m21A34AB19CD14EA292A34871BC6675DBF4E7718B(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27 = XmlNode_get_ReadState_m55209695C2C5D688B1FEE602F1ED3F5B37F38E0F(L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0067;
		}
	}
	{
		XmlExceptionHelper_ThrowDeclarationNotFirst_mD72489AE6AAAB1F5895C5E53F7B13239271FE69A(__this, /*hidden argument*/NULL);
	}

IL_0067:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_28 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_28, 5, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		V_3 = 3;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_30 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		XmlUTF8TextReader_SkipWhitespace_m06EE0DC2495B4BDBEC80B2AC96690512FF4B96C4(__this, /*hidden argument*/NULL);
		XmlUTF8TextReader_ReadAttributes_mB36A035762B54FB2299D7D8F96A8F2A7A5AB0489(__this, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_32 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_32, /*hidden argument*/NULL);
		int32_t L_34 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34));
		goto IL_00ca;
	}

IL_00a4:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_35 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_36 = V_4;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		uint8_t L_38 = XmlBufferReader_GetByte_m8E9C808727C7D612A20E31CF45E83A284C6A1F76(L_35, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37)), (int32_t)1)), /*hidden argument*/NULL);
		V_6 = L_38;
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		uint8_t L_40 = V_6;
		NullCheck(L_39);
		uint8_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if (!((int32_t)((int32_t)L_42&(int32_t)4)))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)1));
	}

IL_00ca:
	{
		int32_t L_44 = V_5;
		if ((((int32_t)L_44) > ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}

IL_00cf:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_45 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = XmlBufferReader_GetBuffer_mA8D442CFFAA68D23D6A6C86B1953D35269ADAFE7(L_45, 2, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_46;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_47 = V_1;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_00ee;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_51 = V_1;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((((int32_t)L_54) == ((int32_t)((int32_t)62))))
		{
			goto IL_0106;
		}
	}

IL_00ee:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_55 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_56 = V_1;
		int32_t L_57 = V_0;
		NullCheck(L_55);
		String_t* L_58 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_55, L_56, L_57, 2);
		XmlExceptionHelper_ThrowTokenExpected_mA379717CE09073B49DC624B5B2474EAF7AAAB4A2(__this, _stringLiteral48EE9FDB6490AADC28BBB90CEE75350BE54532DE, L_58, /*hidden argument*/NULL);
	}

IL_0106:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_59 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_59);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_59, 2, /*hidden argument*/NULL);
		XmlDeclarationNode_tF18E8BF011A44F0380942A5F3D8B600DA82CF3E5 * L_60 = XmlBaseReader_MoveToDeclaration_mF423DC14FEDA3FCC37AE2741C7B931A820DC30D4(__this, /*hidden argument*/NULL);
		XmlDeclarationNode_tF18E8BF011A44F0380942A5F3D8B600DA82CF3E5 * L_61 = L_60;
		NullCheck(L_61);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_62 = XmlNode_get_LocalName_m8F65CBD2DC9347E3AE70EC78022AF0A09F404EE6(L_61, /*hidden argument*/NULL);
		int32_t L_63 = V_2;
		int32_t L_64 = V_3;
		NullCheck(L_62);
		StringHandle_SetValue_mC23E0E0B06D2EC53FBAB74A28010B603690AC778(L_62, L_63, L_64, /*hidden argument*/NULL);
		NullCheck(L_61);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_65 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_61, /*hidden argument*/NULL);
		int32_t L_66 = V_4;
		int32_t L_67 = V_5;
		NullCheck(L_65);
		ValueHandle_SetValue_mBD180573C3C14B9AE2F42D2C2E94910BB4D9D433(L_65, ((int32_t)17), L_66, L_67, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::VerifyNCName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_VerifyNCName_m0B7F7B052979DC5C25D2F26D47CF353CC727D28B (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_VerifyNCName_m0B7F7B052979DC5C25D2F26D47CF353CC727D28B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t0ED1642D9D0E4F0F7CB233F75C42460578F8ABF7_il2cpp_TypeInfo_var);
		XmlConvert_VerifyNCName_mF62837DD0C6C41324F0F42C643E7B72E0AAEF252(L_0, /*hidden argument*/NULL);
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Xml.XmlException)
		V_0 = ((XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)__exception_local);
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_1 = V_0;
		XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95(__this, L_1, /*hidden argument*/NULL);
		goto IL_0013;
	} // end catch (depth: 1)

IL_0013:
	{
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadQualifiedName(System.Xml.PrefixHandle,System.Xml.StringHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadQualifiedName_mAD168604D705E1A35EC24B6DDEA5C7B7523A739B (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * ___prefix0, StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * ___localName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadQualifiedName_mAD168604D705E1A35EC24B6DDEA5C7B7523A739B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_0 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = XmlBufferReader_GetBuffer_m5986B41D7559DCE5C78D27042F0F62D844E30747(L_0, (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = L_1;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		int32_t L_2 = V_0;
		V_6 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0066;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_2;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		int32_t L_9 = V_3;
		V_5 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (((int32_t)((int32_t)L_13&(int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_14 = V_4;
		V_4 = ((int32_t)((int32_t)L_14|(int32_t)((int32_t)128)));
	}

IL_003b:
	{
		int32_t L_15 = V_4;
		int32_t L_16 = V_3;
		V_4 = ((int32_t)((int32_t)L_15|(int32_t)L_16));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		goto IL_0060;
	}

IL_0047:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_2;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_3 = L_21;
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if (!((int32_t)((int32_t)L_25&(int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_26 = V_4;
		int32_t L_27 = V_3;
		V_4 = ((int32_t)((int32_t)L_26|(int32_t)L_27));
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_0072;
	}

IL_0066:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)((int32_t)L_31|(int32_t)((int32_t)128)));
		V_3 = 0;
	}

IL_0072:
	{
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0137;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34));
		int32_t L_35 = V_7;
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_36 = V_5;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)97))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) > ((int32_t)((int32_t)122))))
		{
			goto IL_00a3;
		}
	}
	{
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_38 = ___prefix0;
		int32_t L_39 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93_il2cpp_TypeInfo_var);
		int32_t L_40 = PrefixHandle_GetAlphaPrefix_m2A482C2E512A3AF0F65F8F8E85AFE79F50B67866(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)((int32_t)97))), /*hidden argument*/NULL);
		NullCheck(L_38);
		PrefixHandle_SetValue_mDA88E144A806F4564F7D600CFAA6435DC4E2783E(L_38, L_40, /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_00a3:
	{
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_41 = ___prefix0;
		int32_t L_42 = V_6;
		int32_t L_43 = V_7;
		NullCheck(L_41);
		PrefixHandle_SetValue_m9A8694CF93E9E76ADF778920D35565AF544762C7(L_41, L_42, L_43, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		int32_t L_45 = V_0;
		V_8 = L_45;
		int32_t L_46 = V_0;
		int32_t L_47 = V_1;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			goto IL_00fc;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_3 = L_51;
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_52 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		int32_t L_53 = V_3;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		if (((int32_t)((int32_t)L_55&(int32_t)1)))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_56 = V_4;
		V_4 = ((int32_t)((int32_t)L_56|(int32_t)((int32_t)128)));
	}

IL_00d1:
	{
		int32_t L_57 = V_4;
		int32_t L_58 = V_3;
		V_4 = ((int32_t)((int32_t)L_57|(int32_t)L_58));
		int32_t L_59 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		goto IL_00f6;
	}

IL_00dd:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		uint8_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_3 = L_63;
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_64 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		int32_t L_65 = V_3;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		uint8_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		if (!((int32_t)((int32_t)L_67&(int32_t)2)))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_68 = V_4;
		int32_t L_69 = V_3;
		V_4 = ((int32_t)((int32_t)L_68|(int32_t)L_69));
		int32_t L_70 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_71 = V_0;
		int32_t L_72 = V_1;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_0108;
	}

IL_00fc:
	{
		int32_t L_73 = V_4;
		V_4 = ((int32_t)((int32_t)L_73|(int32_t)((int32_t)128)));
		V_3 = 0;
	}

IL_0108:
	{
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_74 = ___localName1;
		int32_t L_75 = V_8;
		int32_t L_76 = V_0;
		int32_t L_77 = V_8;
		NullCheck(L_74);
		StringHandle_SetValue_mC23E0E0B06D2EC53FBAB74A28010B603690AC778(L_74, L_75, ((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)L_77)), /*hidden argument*/NULL);
		int32_t L_78 = V_4;
		if ((((int32_t)L_78) < ((int32_t)((int32_t)128))))
		{
			goto IL_015f;
		}
	}
	{
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_79 = ___prefix0;
		NullCheck(L_79);
		String_t* L_80 = PrefixHandle_GetString_mEB0712B21E19DC06819F5198DB74DAFC6F12B0F6(L_79, /*hidden argument*/NULL);
		XmlUTF8TextReader_VerifyNCName_m0B7F7B052979DC5C25D2F26D47CF353CC727D28B(__this, L_80, /*hidden argument*/NULL);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_81 = ___localName1;
		NullCheck(L_81);
		String_t* L_82 = StringHandle_GetString_mAB49757C479587CCC59D51FEB727CAE0C2566053(L_81, /*hidden argument*/NULL);
		XmlUTF8TextReader_VerifyNCName_m0B7F7B052979DC5C25D2F26D47CF353CC727D28B(__this, L_82, /*hidden argument*/NULL);
		goto IL_015f;
	}

IL_0137:
	{
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_83 = ___prefix0;
		NullCheck(L_83);
		PrefixHandle_SetValue_mDA88E144A806F4564F7D600CFAA6435DC4E2783E(L_83, 0, /*hidden argument*/NULL);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_84 = ___localName1;
		int32_t L_85 = V_6;
		int32_t L_86 = V_0;
		int32_t L_87 = V_6;
		NullCheck(L_84);
		StringHandle_SetValue_mC23E0E0B06D2EC53FBAB74A28010B603690AC778(L_84, L_85, ((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)L_87)), /*hidden argument*/NULL);
		int32_t L_88 = V_4;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)128))))
		{
			goto IL_015f;
		}
	}
	{
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_89 = ___localName1;
		NullCheck(L_89);
		String_t* L_90 = StringHandle_GetString_mAB49757C479587CCC59D51FEB727CAE0C2566053(L_89, /*hidden argument*/NULL);
		XmlUTF8TextReader_VerifyNCName_m0B7F7B052979DC5C25D2F26D47CF353CC727D28B(__this, L_90, /*hidden argument*/NULL);
	}

IL_015f:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_91 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_92 = V_0;
		int32_t L_93 = V_6;
		NullCheck(L_91);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_91, ((int32_t)il2cpp_codegen_subtract((int32_t)L_92, (int32_t)L_93)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XmlUTF8TextReader::ReadAttributeText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_ReadAttributeText_m1DB2D2F9934FC782E92F019A60C0FA6E95CB634E (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___offsetMax2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadAttributeText_m1DB2D2F9934FC782E92F019A60C0FA6E95CB634E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		V_0 = L_0;
		int32_t L_1 = ___offset1;
		V_1 = L_1;
		goto IL_000f;
	}

IL_000a:
	{
		int32_t L_2 = ___offset1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_000f:
	{
		int32_t L_3 = ___offset1;
		int32_t L_4 = ___offsetMax2;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001d;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		uint8_t L_10 = L_9;
		uint8_t L_11 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (((int32_t)((int32_t)L_11&(int32_t)((int32_t)16))))
		{
			goto IL_000a;
		}
	}

IL_001d:
	{
		int32_t L_12 = ___offset1;
		int32_t L_13 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13));
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadAttributes_mB36A035762B54FB2299D7D8F96A8F2A7A5AB0489 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadAttributes_mB36A035762B54FB2299D7D8F96A8F2A7A5AB0489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_10 = NULL;
	int32_t V_11 = 0;
	Il2CppChar V_12 = 0x0;
	Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * V_13 = NULL;
	Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * V_14 = NULL;
	ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * G_B32_0 = NULL;
	ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * G_B33_1 = NULL;
	ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * G_B36_0 = NULL;
	ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * G_B35_0 = NULL;
	int32_t G_B37_0 = 0;
	ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * G_B37_1 = NULL;
	{
		V_0 = 0;
		bool L_0 = __this->get_buffered_44();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_1 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0016:
	{
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_3 = __this->get_prefix_40();
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_4 = __this->get_localName_41();
		XmlUTF8TextReader_ReadQualifiedName_mAD168604D705E1A35EC24B6DDEA5C7B7523A739B(__this, L_3, L_4, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_5 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint8_t L_6 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)61))))
		{
			goto IL_0062;
		}
	}
	{
		XmlUTF8TextReader_SkipWhitespace_m06EE0DC2495B4BDBEC80B2AC96690512FF4B96C4(__this, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_7 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		uint8_t L_8 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)61))))
		{
			goto IL_0062;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_9 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		uint8_t L_10 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_9, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowTokenExpected_m58AA20C98DF41754931AB76334B48A47C2660099(__this, _stringLiteral21606782C65E44CAC7AFBB90977D8B6F82140E76, L_10, /*hidden argument*/NULL);
	}

IL_0062:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_11 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_11, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_12 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		uint8_t L_13 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		uint8_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b5;
		}
	}
	{
		uint8_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)39))))
		{
			goto IL_00b5;
		}
	}
	{
		XmlUTF8TextReader_SkipWhitespace_m06EE0DC2495B4BDBEC80B2AC96690512FF4B96C4(__this, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_16 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		uint8_t L_17 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		uint8_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b5;
		}
	}
	{
		uint8_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)39))))
		{
			goto IL_00b5;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_20 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		uint8_t L_21 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_20, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowTokenExpected_m58AA20C98DF41754931AB76334B48A47C2660099(__this, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, L_21, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_22 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_22, /*hidden argument*/NULL);
		V_3 = (bool)0;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_23 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_24 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
	}

IL_00cf:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_25 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = XmlBufferReader_GetBuffer_m5986B41D7559DCE5C78D27042F0F62D844E30747(L_25, (int32_t*)(&V_8), (int32_t*)(&V_9), /*hidden argument*/NULL);
		V_10 = L_26;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = V_10;
		int32_t L_28 = V_8;
		int32_t L_29 = V_9;
		int32_t L_30 = XmlUTF8TextReader_ReadAttributeText_m1DB2D2F9934FC782E92F019A60C0FA6E95CB634E(__this, L_27, L_28, L_29, /*hidden argument*/NULL);
		V_11 = L_30;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_31 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_32 = V_11;
		NullCheck(L_31);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_31, L_32, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_33 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		uint8_t L_34 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_33, /*hidden argument*/NULL);
		V_1 = L_34;
		uint8_t L_35 = V_1;
		uint8_t L_36 = V_2;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_017c;
		}
	}
	{
		uint8_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_011b;
		}
	}
	{
		XmlUTF8TextReader_ReadCharRef_m4D380E8337F9A27B0DE6F1CE554717039D5B58E5(__this, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_00cf;
	}

IL_011b:
	{
		uint8_t L_38 = V_1;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)39))))
		{
			goto IL_0125;
		}
	}
	{
		uint8_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0132;
		}
	}

IL_0125:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_40 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_40, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_0132:
	{
		uint8_t L_41 = V_1;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)10))))
		{
			goto IL_0141;
		}
	}
	{
		uint8_t L_42 = V_1;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)13))))
		{
			goto IL_0141;
		}
	}
	{
		uint8_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0153;
		}
	}

IL_0141:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_44 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_44, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_00cf;
	}

IL_0153:
	{
		uint8_t L_45 = V_1;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_0166;
		}
	}
	{
		XmlUTF8TextReader_ReadNonFFFE_m8ACBBF0DE024B7CFB4CFD6ED72DE1CFCA1DAFC45(__this, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_0166:
	{
		uint8_t L_46 = V_2;
		V_12 = L_46;
		String_t* L_47 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&V_12), /*hidden argument*/NULL);
		uint8_t L_48 = V_1;
		XmlExceptionHelper_ThrowTokenExpected_m58AA20C98DF41754931AB76334B48A47C2660099(__this, L_47, L_48, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_017c:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_49 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		int32_t L_50 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_49, /*hidden argument*/NULL);
		int32_t L_51 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)L_51));
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_52 = __this->get_prefix_40();
		NullCheck(L_52);
		bool L_53 = PrefixHandle_get_IsXmlns_mD2F891E4055BEFEF1D53E5E806C8145B21D922B1(L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01d3;
		}
	}
	{
		Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * L_54 = XmlBaseReader_AddNamespace_m0904CB720A41564313B8934E2D016DC7BEB2EEC8(__this, /*hidden argument*/NULL);
		V_13 = L_54;
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_55 = __this->get_localName_41();
		Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * L_56 = V_13;
		NullCheck(L_56);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_57 = Namespace_get_Prefix_mA6B31B1313877F46D610CBF40384B3C4308F5A02(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		StringHandle_ToPrefixHandle_mE13F2F7FCAA46D90B9D9652A83AD4FEDCE0C254B(L_55, L_57, /*hidden argument*/NULL);
		Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * L_58 = V_13;
		NullCheck(L_58);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_59 = Namespace_get_Uri_m991C708A6252A953E6809437D96B6D60EB4AA7BB(L_58, /*hidden argument*/NULL);
		int32_t L_60 = V_4;
		int32_t L_61 = V_5;
		bool L_62 = V_3;
		NullCheck(L_59);
		StringHandle_SetValue_m10C2CB2F21811299E386F6A479ACCF12BAC51FEC(L_59, L_60, L_61, L_62, /*hidden argument*/NULL);
		Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * L_63 = V_13;
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_64 = XmlBaseReader_AddXmlnsAttribute_m797BFF49EE87CC74D04D3345FADB1FB372F07A02(__this, L_63, /*hidden argument*/NULL);
		V_6 = L_64;
		goto IL_02c3;
	}

IL_01d3:
	{
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_65 = __this->get_prefix_40();
		NullCheck(L_65);
		bool L_66 = PrefixHandle_get_IsEmpty_m9B927FB684319C782618D0A23B4C247679F733B4(L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0222;
		}
	}
	{
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_67 = __this->get_localName_41();
		NullCheck(L_67);
		bool L_68 = StringHandle_get_IsXmlns_m2E73E5353A3142B5B04A9A935485438CFDC89DBF(L_67, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_0222;
		}
	}
	{
		Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * L_69 = XmlBaseReader_AddNamespace_m0904CB720A41564313B8934E2D016DC7BEB2EEC8(__this, /*hidden argument*/NULL);
		V_14 = L_69;
		Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * L_70 = V_14;
		NullCheck(L_70);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_71 = Namespace_get_Prefix_mA6B31B1313877F46D610CBF40384B3C4308F5A02(L_70, /*hidden argument*/NULL);
		NullCheck(L_71);
		PrefixHandle_SetValue_mDA88E144A806F4564F7D600CFAA6435DC4E2783E(L_71, 0, /*hidden argument*/NULL);
		Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * L_72 = V_14;
		NullCheck(L_72);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_73 = Namespace_get_Uri_m991C708A6252A953E6809437D96B6D60EB4AA7BB(L_72, /*hidden argument*/NULL);
		int32_t L_74 = V_4;
		int32_t L_75 = V_5;
		bool L_76 = V_3;
		NullCheck(L_73);
		StringHandle_SetValue_m10C2CB2F21811299E386F6A479ACCF12BAC51FEC(L_73, L_74, L_75, L_76, /*hidden argument*/NULL);
		Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * L_77 = V_14;
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_78 = XmlBaseReader_AddXmlnsAttribute_m797BFF49EE87CC74D04D3345FADB1FB372F07A02(__this, L_77, /*hidden argument*/NULL);
		V_6 = L_78;
		goto IL_02c3;
	}

IL_0222:
	{
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_79 = __this->get_prefix_40();
		NullCheck(L_79);
		bool L_80 = PrefixHandle_get_IsXml_mB3C2EFA66B9EE64BD4376444BD6C086462DABDD2(L_79, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_027e;
		}
	}
	{
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_81 = XmlBaseReader_AddXmlAttribute_m3BDF4F3535071A74BAF767F2B7350696A2AD7A84(__this, /*hidden argument*/NULL);
		V_6 = L_81;
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_82 = V_6;
		NullCheck(L_82);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_83 = XmlNode_get_Prefix_m81A3FDD59EF9D19EEF24CF6BF9D8C38A3CD9D7C6(L_82, /*hidden argument*/NULL);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_84 = __this->get_prefix_40();
		NullCheck(L_83);
		PrefixHandle_SetValue_mFAA1A09AE3F31598A9E425CCDB64D7DA63947418(L_83, L_84, /*hidden argument*/NULL);
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_85 = V_6;
		NullCheck(L_85);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_86 = XmlNode_get_LocalName_m8F65CBD2DC9347E3AE70EC78022AF0A09F404EE6(L_85, /*hidden argument*/NULL);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_87 = __this->get_localName_41();
		NullCheck(L_86);
		StringHandle_SetValue_m4436A82922E423449D923D7E7F3D58B745E925C5(L_86, L_87, /*hidden argument*/NULL);
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_88 = V_6;
		NullCheck(L_88);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_89 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_88, /*hidden argument*/NULL);
		bool L_90 = V_3;
		G_B31_0 = L_89;
		if (L_90)
		{
			G_B32_0 = L_89;
			goto IL_0269;
		}
	}
	{
		G_B33_0 = ((int32_t)17);
		G_B33_1 = G_B31_0;
		goto IL_026b;
	}

IL_0269:
	{
		G_B33_0 = ((int32_t)18);
		G_B33_1 = G_B32_0;
	}

IL_026b:
	{
		int32_t L_91 = V_4;
		int32_t L_92 = V_5;
		NullCheck(G_B33_1);
		ValueHandle_SetValue_mBD180573C3C14B9AE2F42D2C2E94910BB4D9D433(G_B33_1, G_B33_0, L_91, L_92, /*hidden argument*/NULL);
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_93 = V_6;
		XmlBaseReader_FixXmlAttribute_mC0BF3C899E5051AB7CB8E2C63CA02CDD02F8886D(__this, L_93, /*hidden argument*/NULL);
		goto IL_02c3;
	}

IL_027e:
	{
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_94 = XmlBaseReader_AddAttribute_m63B073F4A933D2FBDA32014F992C4F757F40D37C(__this, /*hidden argument*/NULL);
		V_6 = L_94;
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_95 = V_6;
		NullCheck(L_95);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_96 = XmlNode_get_Prefix_m81A3FDD59EF9D19EEF24CF6BF9D8C38A3CD9D7C6(L_95, /*hidden argument*/NULL);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_97 = __this->get_prefix_40();
		NullCheck(L_96);
		PrefixHandle_SetValue_mFAA1A09AE3F31598A9E425CCDB64D7DA63947418(L_96, L_97, /*hidden argument*/NULL);
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_98 = V_6;
		NullCheck(L_98);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_99 = XmlNode_get_LocalName_m8F65CBD2DC9347E3AE70EC78022AF0A09F404EE6(L_98, /*hidden argument*/NULL);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_100 = __this->get_localName_41();
		NullCheck(L_99);
		StringHandle_SetValue_m4436A82922E423449D923D7E7F3D58B745E925C5(L_99, L_100, /*hidden argument*/NULL);
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_101 = V_6;
		NullCheck(L_101);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_102 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_101, /*hidden argument*/NULL);
		bool L_103 = V_3;
		G_B35_0 = L_102;
		if (L_103)
		{
			G_B36_0 = L_102;
			goto IL_02b8;
		}
	}
	{
		G_B37_0 = ((int32_t)17);
		G_B37_1 = G_B35_0;
		goto IL_02ba;
	}

IL_02b8:
	{
		G_B37_0 = ((int32_t)18);
		G_B37_1 = G_B36_0;
	}

IL_02ba:
	{
		int32_t L_104 = V_4;
		int32_t L_105 = V_5;
		NullCheck(G_B37_1);
		ValueHandle_SetValue_mBD180573C3C14B9AE2F42D2C2E94910BB4D9D433(G_B37_1, G_B37_0, L_104, L_105, /*hidden argument*/NULL);
	}

IL_02c3:
	{
		XmlAttributeNode_t909F9770D50369D29FE2C46E4A976AC9D96FA85D * L_106 = V_6;
		uint8_t L_107 = V_2;
		NullCheck(L_106);
		XmlNode_set_QuoteChar_m4A60122B239CB60FA45CA38A3866D2C26C798994(L_106, L_107, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_108 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_108);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_108, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_109 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_109);
		uint8_t L_110 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_109, /*hidden argument*/NULL);
		V_1 = L_110;
		V_7 = (bool)0;
		goto IL_0301;
	}

IL_02e7:
	{
		V_7 = (bool)1;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_111 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_111);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_111, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_112 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_112);
		uint8_t L_113 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_112, /*hidden argument*/NULL);
		V_1 = L_113;
	}

IL_0301:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_114 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		uint8_t L_115 = V_1;
		NullCheck(L_114);
		uint8_t L_116 = L_115;
		uint8_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		if (((int32_t)((int32_t)L_117&(int32_t)4)))
		{
			goto IL_02e7;
		}
	}
	{
		uint8_t L_118 = V_1;
		if ((((int32_t)L_118) == ((int32_t)((int32_t)62))))
		{
			goto IL_033c;
		}
	}
	{
		uint8_t L_119 = V_1;
		if ((((int32_t)L_119) == ((int32_t)((int32_t)47))))
		{
			goto IL_033c;
		}
	}
	{
		uint8_t L_120 = V_1;
		if ((((int32_t)L_120) == ((int32_t)((int32_t)63))))
		{
			goto IL_033c;
		}
	}
	{
		bool L_121 = V_7;
		if (L_121)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_122 = SR_GetString_m9C84EE1DB2BE4E43D84B7CC8E7738DF0037070B5(_stringLiteral3384782D530992E6F6D9BBC1DC2481C82104F355, /*hidden argument*/NULL);
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_123 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_m3C6F865CCA07051F36F465F1BBE24251906765A9(L_123, L_122, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95(__this, L_123, /*hidden argument*/NULL);
		goto IL_0016;
	}

IL_033c:
	{
		bool L_124 = __this->get_buffered_44();
		if (!L_124)
		{
			goto IL_0365;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_125 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_125);
		int32_t L_126 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_125, /*hidden argument*/NULL);
		int32_t L_127 = V_0;
		int32_t L_128 = __this->get_maxBytesPerRead_45();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_126, (int32_t)L_127))) <= ((int32_t)L_128)))
		{
			goto IL_0365;
		}
	}
	{
		int32_t L_129 = __this->get_maxBytesPerRead_45();
		XmlExceptionHelper_ThrowMaxBytesPerReadExceeded_m07A7EB8649AAE9D1CBEA7029E172A0D242C95203(__this, L_129, /*hidden argument*/NULL);
	}

IL_0365:
	{
		XmlBaseReader_ProcessAttributes_mA6657B4A79BEE52710B97BDA73DABF32BCA1A29A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadNonFFFE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadNonFFFE_m8ACBBF0DE024B7CFB4CFD6ED72DE1CFCA1DAFC45 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadNonFFFE_m8ACBBF0DE024B7CFB4CFD6ED72DE1CFCA1DAFC45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_0 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = XmlBufferReader_GetBuffer_mA8D442CFFAA68D23D6A6C86B1953D35269ADAFE7(L_0, 3, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((((int32_t)L_9) == ((int32_t)((int32_t)190))))
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)2));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_0048;
		}
	}

IL_0033:
	{
		String_t* L_14 = SR_GetString_m9C84EE1DB2BE4E43D84B7CC8E7738DF0037070B5(_stringLiteral5A6A1E0907BED5A04E10598C87777242E0234F60, /*hidden argument*/NULL);
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_15 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_m3C6F865CCA07051F36F465F1BBE24251906765A9(L_15, L_14, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95(__this, L_15, /*hidden argument*/NULL);
	}

IL_0048:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_16 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_16, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlUTF8TextReader::IsNextCharacterNonFFFE(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlUTF8TextReader_IsNextCharacterNonFFFE_mC05420DC9329043CA85604ACA930AC187937D1BC (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_0026;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___buffer0;
		int32_t L_5 = ___offset1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)2));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_7) == ((int32_t)((int32_t)190))))
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___buffer0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::BufferElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_BufferElement_m0FDB082B7B2909342770933644526DF6138D8C3A (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_0 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (bool)0;
		V_2 = (uint8_t)0;
		goto IL_0081;
	}

IL_0012:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_2 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = XmlBufferReader_GetBuffer_m9D1A4867D610CEFFA9E5587971078A7EAA27617F(L_2, ((int32_t)128), (int32_t*)(&V_3), (int32_t*)(&V_4), /*hidden argument*/NULL);
		V_5 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = V_4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)128)))) == ((uint32_t)L_5))))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_6 = V_3;
		V_6 = L_6;
		goto IL_0068;
	}

IL_0038:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_7 = L_10;
		uint8_t L_11 = V_2;
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_12 = V_7;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)39))))
		{
			goto IL_004e;
		}
	}
	{
		uint8_t L_13 = V_7;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0051;
		}
	}

IL_004e:
	{
		uint8_t L_14 = V_7;
		V_2 = L_14;
	}

IL_0051:
	{
		uint8_t L_15 = V_7;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0062;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0062;
	}

IL_005b:
	{
		uint8_t L_16 = V_7;
		uint8_t L_17 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0062;
		}
	}
	{
		V_2 = (uint8_t)0;
	}

IL_0062:
	{
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_19 = V_6;
		int32_t L_20 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0071;
		}
	}
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0038;
		}
	}

IL_0071:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_22 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_22, ((int32_t)128), /*hidden argument*/NULL);
	}

IL_0081:
	{
		bool L_23 = V_1;
		if (!L_23)
		{
			goto IL_0012;
		}
	}

IL_0084:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_24 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_25 = V_0;
		NullCheck(L_24);
		XmlBufferReader_set_Offset_m90EE3B3D9D316FB0A7BE17ADF084337DB5237E84(L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadStartElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadStartElement_m49BFEE7E3B734207678ADC44FEFF5BB16426A855 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadStartElement_m49BFEE7E3B734207678ADC44FEFF5BB16426A855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * V_0 = NULL;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	{
		bool L_0 = __this->get_buffered_44();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		XmlUTF8TextReader_BufferElement_m0FDB082B7B2909342770933644526DF6138D8C3A(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_1 = XmlBaseReader_EnterScope_m6D18733206613975F2C966D86ED7FAA91C6F8318(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_2 = V_0;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_3 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_NameOffset_20(L_4);
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_5 = V_0;
		NullCheck(L_5);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_6 = XmlNode_get_Prefix_m81A3FDD59EF9D19EEF24CF6BF9D8C38A3CD9D7C6(L_5, /*hidden argument*/NULL);
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_7 = V_0;
		NullCheck(L_7);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_8 = XmlNode_get_LocalName_m8F65CBD2DC9347E3AE70EC78022AF0A09F404EE6(L_7, /*hidden argument*/NULL);
		XmlUTF8TextReader_ReadQualifiedName_mAD168604D705E1A35EC24B6DDEA5C7B7523A739B(__this, L_6, L_8, /*hidden argument*/NULL);
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_9 = V_0;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_10 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_10, /*hidden argument*/NULL);
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_NameOffset_20();
		NullCheck(L_9);
		L_9->set_NameLength_21(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_13)));
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_14 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		uint8_t L_15 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0075;
	}

IL_005e:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_16 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_16, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_17 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint8_t L_18 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		uint8_t L_20 = V_1;
		NullCheck(L_19);
		uint8_t L_21 = L_20;
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if (((int32_t)((int32_t)L_22&(int32_t)4)))
		{
			goto IL_005e;
		}
	}
	{
		uint8_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)62))))
		{
			goto IL_009c;
		}
	}
	{
		uint8_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)47))))
		{
			goto IL_009c;
		}
	}
	{
		XmlUTF8TextReader_ReadAttributes_mB36A035762B54FB2299D7D8F96A8F2A7A5AB0489(__this, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_25 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		uint8_t L_26 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_25, /*hidden argument*/NULL);
		V_1 = L_26;
	}

IL_009c:
	{
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_27 = V_0;
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_28 = V_0;
		NullCheck(L_28);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_29 = XmlNode_get_Prefix_m81A3FDD59EF9D19EEF24CF6BF9D8C38A3CD9D7C6(L_28, /*hidden argument*/NULL);
		Namespace_tBF52031DE9D8DA42D867B530329D04C845D53A71 * L_30 = XmlBaseReader_LookupNamespace_m2AB9E6BCCA637593764C150E9AEB3859AE8B574D(__this, L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		XmlNode_set_Namespace_m315B5CFCD8F3DBB8F5FCCAE15E0BB492A26ACFD4(L_27, L_30, /*hidden argument*/NULL);
		V_2 = (bool)0;
		uint8_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00c2;
		}
	}
	{
		V_2 = (bool)1;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_32 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_32, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_33 = V_0;
		bool L_34 = V_2;
		NullCheck(L_33);
		XmlNode_set_IsEmptyElement_mB478E42C64A4E03F62B26E1307F5CCCD861DA33A(L_33, L_34, /*hidden argument*/NULL);
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_35 = V_0;
		bool L_36 = V_2;
		NullCheck(L_35);
		XmlNode_set_ExitScope_m944973AA27EE9BEFEBEE45E8049A1E295ECAD3E4(L_35, L_36, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_37 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		uint8_t L_38 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_38) == ((int32_t)((int32_t)62))))
		{
			goto IL_00f5;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_39 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		uint8_t L_40 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_39, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowTokenExpected_m58AA20C98DF41754931AB76334B48A47C2660099(__this, _stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194, L_40, /*hidden argument*/NULL);
	}

IL_00f5:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_41 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_41, /*hidden argument*/NULL);
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_42 = V_0;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_43 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_44 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		XmlElementNode_set_BufferOffset_m0C90158F9DEB590C1CCDB720C8E1ECDF55781FBE(L_42, L_44, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadEndElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadEndElement_mA1FB87F033F0D0AA2DD7A0BCED94486CA59D9DDD (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadEndElement_mA1FB87F033F0D0AA2DD7A0BCED94486CA59D9DDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_0 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_0, /*hidden argument*/NULL);
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_1 = XmlBaseReader_get_ElementNode_mE5701AD9967C04183F03AE57E3D920F2A489A1E2(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_NameOffset_20();
		V_1 = L_3;
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_NameLength_21();
		V_2 = L_5;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_6 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = XmlBufferReader_GetBuffer_mA8D442CFFAA68D23D6A6C86B1953D35269ADAFE7(L_6, L_7, (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_4 = L_8;
		V_5 = 0;
		goto IL_008f;
	}

IL_0035:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_4;
		int32_t L_10 = V_3;
		int32_t L_11 = V_5;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_4;
		int32_t L_15 = V_1;
		int32_t L_16 = V_5;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((((int32_t)L_13) == ((int32_t)L_18)))
		{
			goto IL_0089;
		}
	}
	{
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_19 = __this->get_prefix_40();
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_20 = __this->get_localName_41();
		XmlUTF8TextReader_ReadQualifiedName_mAD168604D705E1A35EC24B6DDEA5C7B7523A739B(__this, L_19, L_20, /*hidden argument*/NULL);
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_21 = V_0;
		NullCheck(L_21);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_22 = XmlNode_get_Prefix_m81A3FDD59EF9D19EEF24CF6BF9D8C38A3CD9D7C6(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = PrefixHandle_GetString_mEB0712B21E19DC06819F5198DB74DAFC6F12B0F6(L_22, /*hidden argument*/NULL);
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_24 = V_0;
		NullCheck(L_24);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_25 = XmlNode_get_LocalName_m8F65CBD2DC9347E3AE70EC78022AF0A09F404EE6(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		String_t* L_26 = StringHandle_GetString_mAB49757C479587CCC59D51FEB727CAE0C2566053(L_25, /*hidden argument*/NULL);
		PrefixHandle_t5588C375ADCBEA3808062B5BAE1ABCF089BF6D93 * L_27 = __this->get_prefix_40();
		NullCheck(L_27);
		String_t* L_28 = PrefixHandle_GetString_mEB0712B21E19DC06819F5198DB74DAFC6F12B0F6(L_27, /*hidden argument*/NULL);
		StringHandle_t21394BA182593D4352A7437470B74DB78B743ADE * L_29 = __this->get_localName_41();
		NullCheck(L_29);
		String_t* L_30 = StringHandle_GetString_mAB49757C479587CCC59D51FEB727CAE0C2566053(L_29, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowTagMismatch_m84B14036AC27C158CF152BA4AA8BB3F0B32F77C2(__this, L_23, L_26, L_28, L_30, /*hidden argument*/NULL);
	}

IL_0089:
	{
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_008f:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0035;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_34 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_35 = V_2;
		NullCheck(L_34);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_34, L_35, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_36 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		uint8_t L_37 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_37) == ((int32_t)((int32_t)62))))
		{
			goto IL_00da;
		}
	}
	{
		XmlUTF8TextReader_SkipWhitespace_m06EE0DC2495B4BDBEC80B2AC96690512FF4B96C4(__this, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_38 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		uint8_t L_39 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_39) == ((int32_t)((int32_t)62))))
		{
			goto IL_00da;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_40 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		uint8_t L_41 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_40, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowTokenExpected_m58AA20C98DF41754931AB76334B48A47C2660099(__this, _stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194, L_41, /*hidden argument*/NULL);
	}

IL_00da:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_42 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_42, /*hidden argument*/NULL);
		XmlBaseReader_MoveToEndElement_m9E4C74CC1A709E798AEEB301ED30548211293577(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadComment_m73271FCC6C5C690D08A98A386588FFB327DE6B1E (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadComment_m73271FCC6C5C690D08A98A386588FFB327DE6B1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	uint8_t V_4 = 0x0;
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_0 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_0, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_1 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		uint8_t L_2 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)45))))
		{
			goto IL_0030;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_3 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		uint8_t L_4 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_3, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowTokenExpected_m58AA20C98DF41754931AB76334B48A47C2660099(__this, _stringLiteralE6A9FC04320A924F46C7C737432BB0389D9DD095, L_4, /*hidden argument*/NULL);
	}

IL_0030:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_5 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_5, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_6 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0047:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_8 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		uint8_t L_9 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		uint8_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)45))))
		{
			goto IL_008f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		uint8_t L_12 = V_4;
		NullCheck(L_11);
		uint8_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (((int32_t)((int32_t)L_14&(int32_t)((int32_t)64))))
		{
			goto IL_0082;
		}
	}
	{
		uint8_t L_15 = V_4;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_0078;
		}
	}
	{
		XmlUTF8TextReader_ReadNonFFFE_m8ACBBF0DE024B7CFB4CFD6ED72DE1CFCA1DAFC45(__this, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_0078:
	{
		uint8_t L_16 = V_4;
		XmlExceptionHelper_ThrowInvalidXml_m06A54081D6D97EC5A1A11932866FBF77C95D81DB(__this, L_16, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_0082:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_17 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_17, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_008f:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_18 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = XmlBufferReader_GetBuffer_mA8D442CFFAA68D23D6A6C86B1953D35269ADAFE7(L_18, 3, (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_3 = L_19;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = V_3;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00cc;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = V_3;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00cc;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = V_3;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)2));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((((int32_t)L_31) == ((int32_t)((int32_t)62))))
		{
			goto IL_00dc;
		}
	}
	{
		String_t* L_32 = SR_GetString_m9C84EE1DB2BE4E43D84B7CC8E7738DF0037070B5(_stringLiteralF5DEBBFF480EBEE869F64BA734E5C3782389C6E6, /*hidden argument*/NULL);
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_33 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_m3C6F865CCA07051F36F465F1BBE24251906765A9(L_33, L_32, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95(__this, L_33, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_34 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_34, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_00dc:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_35 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_35, /*hidden argument*/NULL);
		int32_t L_37 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
		XmlCommentNode_tC7CA5ECB98EC8FCC1AAA805B64B16642892AA2E6 * L_38 = XmlBaseReader_MoveToComment_m9688C5F541019B6F7ADA7D716489EB28C76767B8(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_39 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_38, /*hidden argument*/NULL);
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		NullCheck(L_39);
		ValueHandle_SetValue_mBD180573C3C14B9AE2F42D2C2E94910BB4D9D433(L_39, ((int32_t)17), L_40, L_41, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_42 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_42, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadCData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadCData_m0E556A79ABBD08477229BC620F97E7A593678D9C (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadCData_m0E556A79ABBD08477229BC620F97E7A593678D9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_0 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = XmlBufferReader_GetBuffer_mA8D442CFFAA68D23D6A6C86B1953D35269ADAFE7(L_0, 7, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)2));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)68)))))
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_1;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)3));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)4));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_1;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)5));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = V_1;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)6));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)L_29) == ((int32_t)((int32_t)91))))
		{
			goto IL_0064;
		}
	}

IL_004c:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_30 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_1;
		int32_t L_32 = V_0;
		NullCheck(L_30);
		String_t* L_33 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_30, L_31, L_32, 7);
		XmlExceptionHelper_ThrowTokenExpected_mA379717CE09073B49DC624B5B2474EAF7AAAB4A2(__this, _stringLiteral65F9BA3E3CDFFA500D8B5A924B3AD7C64800C996, L_33, /*hidden argument*/NULL);
	}

IL_0064:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_34 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_34, 7, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_35 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_35, /*hidden argument*/NULL);
		V_2 = L_36;
	}

IL_007c:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_37 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		uint8_t L_38 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_37, /*hidden argument*/NULL);
		V_4 = L_38;
		uint8_t L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ad;
		}
	}
	{
		uint8_t L_40 = V_4;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_00a0;
		}
	}
	{
		XmlUTF8TextReader_ReadNonFFFE_m8ACBBF0DE024B7CFB4CFD6ED72DE1CFCA1DAFC45(__this, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_00a0:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_41 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_41, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_00ad:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_42 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = XmlBufferReader_GetBuffer_mA8D442CFFAA68D23D6A6C86B1953D35269ADAFE7(L_42, 3, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_43;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_44 = V_1;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint8_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_00d5;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_48 = V_1;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		uint8_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_00d5;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_52 = V_1;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)2));
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		if ((((int32_t)L_55) == ((int32_t)((int32_t)62))))
		{
			goto IL_00e2;
		}
	}

IL_00d5:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_56 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_56, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_00e2:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_57 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		int32_t L_58 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_57, /*hidden argument*/NULL);
		int32_t L_59 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)L_59));
		XmlCDataNode_t466D5083F8B29DAD8C615C555412026D474EABF4 * L_60 = XmlBaseReader_MoveToCData_m0A14AE1B7FAD3C6ED344BFA9F7D027F7AAB56955(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_61 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_60, /*hidden argument*/NULL);
		int32_t L_62 = V_2;
		int32_t L_63 = V_3;
		NullCheck(L_61);
		ValueHandle_SetValue_mBD180573C3C14B9AE2F42D2C2E94910BB4D9D433(L_61, ((int32_t)17), L_62, L_63, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_64 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_64);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_64, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XmlUTF8TextReader::ReadCharRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_ReadCharRef_m4D380E8337F9A27B0DE6F1CE554717039D5B58E5 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_0 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_2 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_2, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_0019:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_3 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_4 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		uint8_t L_5 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_0019;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_6 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_6, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_7 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9));
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_10 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		XmlBufferReader_set_Offset_m90EE3B3D9D316FB0A7BE17ADF084337DB5237E84(L_10, L_11, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_12 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15 = XmlBufferReader_GetCharEntity_mA034DB7F9D5E325803F279F8FC0E869D55EB7E6E(L_12, L_13, L_14, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_16 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_16, L_17, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadWhitespace_m5EF0E924D3F7720339504466B231BA8D9A2B30A1 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = __this->get_buffered_44();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_1 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = XmlBufferReader_GetBuffer_m5986B41D7559DCE5C78D27042F0F62D844E30747(L_1, (int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_0 = L_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = XmlUTF8TextReader_ReadWhitespace_m1FE2584E656A5424C9AAADA8562CEDCE8A38D7D8(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		goto IL_004d;
	}

IL_0024:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_7 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = XmlBufferReader_GetBuffer_m9D1A4867D610CEFFA9E5587971078A7EAA27617F(L_7, ((int32_t)2048), (int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_0 = L_8;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = XmlUTF8TextReader_ReadWhitespace_m1FE2584E656A5424C9AAADA8562CEDCE8A38D7D8(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = V_3;
		int32_t L_16 = XmlUTF8TextReader_BreakText_m48AB2448C20427046BE92A4C0789EDB747B249D6(__this, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
	}

IL_004d:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_17 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_18 = V_3;
		NullCheck(L_17);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_17, L_18, /*hidden argument*/NULL);
		XmlTextNode_t3314BAFDFEA93B41FE7358E828C41A9878B4AE24 * L_19 = XmlBaseReader_MoveToWhitespaceText_m6AB1EB3A9D83763C7F33CF3C7B40844E739B7043(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_20 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_19, /*hidden argument*/NULL);
		int32_t L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_20);
		ValueHandle_SetValue_mBD180573C3C14B9AE2F42D2C2E94910BB4D9D433(L_20, ((int32_t)17), L_21, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XmlUTF8TextReader::ReadWhitespace(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_ReadWhitespace_m1FE2584E656A5424C9AAADA8562CEDCE8A38D7D8 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___offsetMax2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadWhitespace_m1FE2584E656A5424C9AAADA8562CEDCE8A38D7D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		V_0 = L_0;
		int32_t L_1 = ___offset1;
		V_1 = L_1;
		goto IL_000f;
	}

IL_000a:
	{
		int32_t L_2 = ___offset1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_000f:
	{
		int32_t L_3 = ___offset1;
		int32_t L_4 = ___offsetMax2;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001d;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		uint8_t L_10 = L_9;
		uint8_t L_11 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (((int32_t)((int32_t)L_11&(int32_t)((int32_t)32))))
		{
			goto IL_000a;
		}
	}

IL_001d:
	{
		int32_t L_12 = ___offset1;
		int32_t L_13 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13));
	}
}
// System.Int32 System.Xml.XmlUTF8TextReader::ReadText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_ReadText_m4394883B9766C51A292C40F19C7E84575DCD2AAF (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___offsetMax2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadText_m4394883B9766C51A292C40F19C7E84575DCD2AAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		V_0 = L_0;
		int32_t L_1 = ___offset1;
		V_1 = L_1;
		goto IL_000f;
	}

IL_000a:
	{
		int32_t L_2 = ___offset1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_000f:
	{
		int32_t L_3 = ___offset1;
		int32_t L_4 = ___offsetMax2;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		uint8_t L_10 = L_9;
		uint8_t L_11 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (((int32_t)((int32_t)L_11&(int32_t)8)))
		{
			goto IL_000a;
		}
	}

IL_001c:
	{
		int32_t L_12 = ___offset1;
		int32_t L_13 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13));
	}
}
// System.Int32 System.Xml.XmlUTF8TextReader::ReadTextAndWatchForInvalidCharacters(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_ReadTextAndWatchForInvalidCharacters_mB2B789022E7B9393EC347A3D232D1343D9EA6996 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___offsetMax2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadTextAndWatchForInvalidCharacters_mB2B789022E7B9393EC347A3D232D1343D9EA6996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		V_0 = L_0;
		int32_t L_1 = ___offset1;
		V_1 = L_1;
		goto IL_0066;
	}

IL_000a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___buffer0;
		int32_t L_3 = ___offset1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int32_t)L_5) == ((int32_t)((int32_t)239))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_6 = ___offset1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		goto IL_0066;
	}

IL_001b:
	{
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___offsetMax2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))) >= ((int32_t)L_8)))
		{
			goto IL_0049;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		bool L_11 = XmlUTF8TextReader_IsNextCharacterNonFFFE_mC05420DC9329043CA85604ACA930AC187937D1BC(__this, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_12 = ___offset1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)3));
		goto IL_0066;
	}

IL_0032:
	{
		String_t* L_13 = SR_GetString_m9C84EE1DB2BE4E43D84B7CC8E7738DF0037070B5(_stringLiteral5A6A1E0907BED5A04E10598C87777242E0234F60, /*hidden argument*/NULL);
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_14 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_m3C6F865CCA07051F36F465F1BBE24251906765A9(L_14, L_13, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95(__this, L_14, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0049:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_15 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_15, /*hidden argument*/NULL);
		int32_t L_17 = ___offset1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_007d;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_18 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		XmlBufferReader_GetBuffer_mA8D442CFFAA68D23D6A6C86B1953D35269ADAFE7(L_18, 3, (int32_t*)(&V_2), /*hidden argument*/NULL);
	}

IL_0066:
	{
		int32_t L_19 = ___offset1;
		int32_t L_20 = ___offsetMax2;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_007d;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ___buffer0;
		int32_t L_23 = ___offset1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		uint8_t L_26 = L_25;
		uint8_t L_27 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if (((int32_t)((int32_t)L_27&(int32_t)8)))
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = ___buffer0;
		int32_t L_29 = ___offset1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((((int32_t)L_31) == ((int32_t)((int32_t)239))))
		{
			goto IL_000a;
		}
	}

IL_007d:
	{
		int32_t L_32 = ___offset1;
		int32_t L_33 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33));
	}
}
// System.Int32 System.Xml.XmlUTF8TextReader::BreakText(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_BreakText_m48AB2448C20427046BE92A4C0789EDB747B249D6 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___length2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)1));
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)128)))) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_6 = ___length2;
		V_0 = L_6;
	}

IL_001a:
	{
		int32_t L_7 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		int32_t L_8 = ___length2;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___length2;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((!(((uint32_t)((int32_t)((int32_t)L_13&(int32_t)((int32_t)192)))) == ((uint32_t)((int32_t)192)))))
		{
			goto IL_001a;
		}
	}

IL_0035:
	{
		int32_t L_14 = ___length2;
		if (L_14)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_003a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = ___buffer0;
		int32_t L_17 = ___offset1;
		int32_t L_18 = ___length2;
		NullCheck(L_16);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18));
		uint8_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_20<<(int32_t)2)))));
		V_2 = 2;
		goto IL_0056;
	}

IL_0047:
	{
		uint8_t L_21 = V_1;
		V_1 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_21<<(int32_t)1)))));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) <= ((int32_t)4)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_24 = V_0;
		return L_24;
	}

IL_0056:
	{
		uint8_t L_25 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_26 = ___length2;
		int32_t L_27 = V_2;
		int32_t L_28 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27))) == ((uint32_t)L_28))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_29 = V_0;
		return L_29;
	}

IL_006c:
	{
		int32_t L_30 = ___length2;
		if (L_30)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_31 = V_0;
		return L_31;
	}

IL_0071:
	{
		int32_t L_32 = ___length2;
		return L_32;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadText_m7228B80DD02629A4D5B1D5C6A1557EF501DCD248 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, bool ___hasLeadingByteOf0xEF0, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = __this->get_buffered_44();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_1 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = XmlBufferReader_GetBuffer_m5986B41D7559DCE5C78D27042F0F62D844E30747(L_1, (int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = ___hasLeadingByteOf0xEF0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = XmlUTF8TextReader_ReadTextAndWatchForInvalidCharacters_mB2B789022E7B9393EC347A3D232D1343D9EA6996(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		goto IL_006b;
	}

IL_0027:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = XmlUTF8TextReader_ReadText_m4394883B9766C51A292C40F19C7E84575DCD2AAF(__this, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		goto IL_006b;
	}

IL_0033:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_12 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = XmlBufferReader_GetBuffer_m9D1A4867D610CEFFA9E5587971078A7EAA27617F(L_12, ((int32_t)2048), (int32_t*)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_0 = L_13;
		bool L_14 = ___hasLeadingByteOf0xEF0;
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		int32_t L_18 = XmlUTF8TextReader_ReadTextAndWatchForInvalidCharacters_mB2B789022E7B9393EC347A3D232D1343D9EA6996(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		goto IL_0061;
	}

IL_0057:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		int32_t L_22 = XmlUTF8TextReader_ReadText_m4394883B9766C51A292C40F19C7E84575DCD2AAF(__this, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_0061:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = XmlUTF8TextReader_BreakText_m48AB2448C20427046BE92A4C0789EDB747B249D6(__this, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_3 = L_26;
	}

IL_006b:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_27 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		int32_t L_28 = V_3;
		NullCheck(L_27);
		XmlBufferReader_Advance_mFE914739520103D7706A2FBA390B26759ECA080B(L_27, L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		int32_t L_31 = V_3;
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)), (int32_t)L_31)))))
		{
			goto IL_00a8;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = V_0;
		int32_t L_33 = V_1;
		int32_t L_34 = V_3;
		NullCheck(L_32);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34));
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_00a8;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = V_0;
		int32_t L_38 = V_1;
		int32_t L_39 = V_3;
		NullCheck(L_37);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)L_39)), (int32_t)1));
		uint8_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((((int32_t)L_41) == ((int32_t)((int32_t)33))))
		{
			goto IL_00a8;
		}
	}
	{
		XmlAtomicTextNode_tDFAE6EC65DE6CD6DB1055BCA114ECADB1FBB851B * L_42 = XmlBaseReader_MoveToAtomicText_m95FCDE52C46C7C532D0DB28B95F098B3447A50D7(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_43 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_42, /*hidden argument*/NULL);
		int32_t L_44 = V_1;
		int32_t L_45 = V_3;
		NullCheck(L_43);
		ValueHandle_SetValue_mBD180573C3C14B9AE2F42D2C2E94910BB4D9D433(L_43, ((int32_t)17), L_44, L_45, /*hidden argument*/NULL);
		return;
	}

IL_00a8:
	{
		XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C * L_46 = XmlBaseReader_MoveToComplexText_m200EC0074EBD7C688C48366D490E5D592DE7E9D2(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_47 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_46, /*hidden argument*/NULL);
		int32_t L_48 = V_1;
		int32_t L_49 = V_3;
		NullCheck(L_47);
		ValueHandle_SetValue_mBD180573C3C14B9AE2F42D2C2E94910BB4D9D433(L_47, ((int32_t)17), L_48, L_49, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::ReadEscapedText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_ReadEscapedText_m3A69CCA8C83C78AF4C318285B7BD3AA5876DB56D (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_ReadEscapedText_m3A69CCA8C83C78AF4C318285B7BD3AA5876DB56D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = XmlUTF8TextReader_ReadCharRef_m4D380E8337F9A27B0DE6F1CE554717039D5B58E5(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)256))))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!((int32_t)((int32_t)L_5&(int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		XmlTextNode_t3314BAFDFEA93B41FE7358E828C41A9878B4AE24 * L_6 = XmlBaseReader_MoveToWhitespaceText_m6AB1EB3A9D83763C7F33CF3C7B40844E739B7043(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_7 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		ValueHandle_SetCharValue_mFF3D88ACC743B673DC9C147330837F918E8D3964(L_7, L_8, /*hidden argument*/NULL);
		return;
	}

IL_002c:
	{
		XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C * L_9 = XmlBaseReader_MoveToComplexText_m200EC0074EBD7C688C48366D490E5D592DE7E9D2(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_10 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		ValueHandle_SetCharValue_mFF3D88ACC743B673DC9C147330837F918E8D3964(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlUTF8TextReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlUTF8TextReader_Read_mAEEFE461D13C5D5875C2C2EA7B5139A975E58C13 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader_Read_mAEEFE461D13C5D5875C2C2EA7B5139A975E58C13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	{
		XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * L_0 = XmlBaseReader_get_Node_m21A34AB19CD14EA292A34871BC6675DBF4E7718B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = XmlNode_get_ReadState_m55209695C2C5D688B1FEE602F1ED3F5B37F38E0F(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * L_2 = XmlBaseReader_get_Node_m21A34AB19CD14EA292A34871BC6675DBF4E7718B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = XmlNode_get_CanMoveToElement_m5BD2F6D1A53C77B1EF67DF403CA4244BB16F003D(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
	}

IL_0024:
	{
		XmlBaseReader_SignNode_m1B1064DCA5A9DF2522180C4B85D0775DE0B750C8(__this, /*hidden argument*/NULL);
		XmlNode_tB0EFE2B5ED3F37B83E95DA2282A489CF40CED3A0 * L_4 = XmlBaseReader_get_Node_m21A34AB19CD14EA292A34871BC6675DBF4E7718B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = XmlNode_get_ExitScope_m70DFD7A674920FE1FF74051CD2176EBE9F8E12C6(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		XmlBaseReader_ExitScope_mB436D2A9EDA5D5B275CB434CDAA17A338A5639AF(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		bool L_6 = __this->get_buffered_44();
		if (L_6)
		{
			goto IL_0061;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_7 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		XmlElementNode_tC03982F75E6F17B505012F06B1EF815DEDE2C4EC * L_8 = XmlBaseReader_get_ElementNode_mE5701AD9967C04183F03AE57E3D920F2A489A1E2(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = XmlElementNode_get_BufferOffset_mE696638CEFB53B77455C6215183B411D15154FC6(L_8, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_maxBytesPerRead_45();
		NullCheck(L_7);
		XmlBufferReader_SetWindow_mC2100C81DE8AC2E0829EBD5A3B34858740DC38A0(L_7, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0061:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_11 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = XmlBufferReader_get_EndOfFile_mC4BD439D86BB6F26A5E9CCAFA30D4D24A1FE144E(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		XmlBaseReader_MoveToEndOfFile_mBFDD9ECA9A75C6BC9DF3A5EF6868DB8D7BBEFB57(__this, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0076:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_13 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		uint8_t L_14 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		uint8_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0120;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_16 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_16, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_17 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint8_t L_18 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		uint8_t L_19 = V_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00b1;
		}
	}
	{
		XmlUTF8TextReader_ReadEndElement_mA1FB87F033F0D0AA2DD7A0BCED94486CA59D9DDD(__this, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_00b1:
	{
		uint8_t L_20 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_0105;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_21 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_21, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_22 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		uint8_t L_23 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		uint8_t L_24 = V_0;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00dd;
		}
	}
	{
		XmlUTF8TextReader_ReadComment_m73271FCC6C5C690D08A98A386588FFB327DE6B1E(__this, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_00dd:
	{
		bool L_25 = XmlBaseReader_get_OutsideRootElement_mEC16D849DC814CE587EF4C5FCCF98EC6FEB47BAF(__this, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_26 = SR_GetString_m9C84EE1DB2BE4E43D84B7CC8E7738DF0037070B5(_stringLiteralEF08D7E5C024BE9848DE609B0087F3177509D61F, /*hidden argument*/NULL);
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_27 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_m3C6F865CCA07051F36F465F1BBE24251906765A9(L_27, L_26, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95(__this, L_27, /*hidden argument*/NULL);
	}

IL_00fa:
	{
		XmlUTF8TextReader_ReadCData_m0E556A79ABBD08477229BC620F97E7A593678D9C(__this, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_0105:
	{
		uint8_t L_28 = V_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0115;
		}
	}
	{
		XmlUTF8TextReader_ReadDeclaration_m29F7BF6CF24F8A868E1051D761954AE3DF49D0DF(__this, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_0115:
	{
		XmlUTF8TextReader_ReadStartElement_m49BFEE7E3B734207678ADC44FEFF5BB16426A855(__this, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_0120:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		uint8_t L_30 = V_0;
		NullCheck(L_29);
		uint8_t L_31 = L_30;
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if (!((int32_t)((int32_t)L_32&(int32_t)((int32_t)32))))
		{
			goto IL_0137;
		}
	}
	{
		XmlUTF8TextReader_ReadWhitespace_m5EF0E924D3F7720339504466B231BA8D9A2B30A1(__this, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_0137:
	{
		bool L_33 = XmlBaseReader_get_OutsideRootElement_mEC16D849DC814CE587EF4C5FCCF98EC6FEB47BAF(__this, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_014f;
		}
	}
	{
		uint8_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)13))))
		{
			goto IL_014f;
		}
	}
	{
		XmlExceptionHelper_ThrowInvalidRootData_m0572DE2D5BF719BFAABEF604B7D9AC3D731DABAC(__this, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_014f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = ((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->get_charType_46();
		uint8_t L_36 = V_0;
		NullCheck(L_35);
		uint8_t L_37 = L_36;
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if (!((int32_t)((int32_t)L_38&(int32_t)8)))
		{
			goto IL_0166;
		}
	}
	{
		XmlUTF8TextReader_ReadText_m7228B80DD02629A4D5B1D5C6A1557EF501DCD248(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_0166:
	{
		uint8_t L_39 = V_0;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_0176;
		}
	}
	{
		XmlUTF8TextReader_ReadEscapedText_m3A69CCA8C83C78AF4C318285B7BD3AA5876DB56D(__this, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_0176:
	{
		uint8_t L_40 = V_0;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_01c1;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_41 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_41, /*hidden argument*/NULL);
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_42 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		bool L_43 = XmlBufferReader_get_EndOfFile_mC4BD439D86BB6F26A5E9CCAFA30D4D24A1FE144E(L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_01ad;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_44 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		uint8_t L_45 = XmlBufferReader_GetByte_m096EB19823DDBE940BA9BF0B073108491DD4B655(L_44, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_01ad;
		}
	}
	{
		XmlUTF8TextReader_ReadWhitespace_m5EF0E924D3F7720339504466B231BA8D9A2B30A1(__this, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_01ad:
	{
		XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C * L_46 = XmlBaseReader_MoveToComplexText_m200EC0074EBD7C688C48366D490E5D592DE7E9D2(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_47 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		ValueHandle_SetCharValue_mFF3D88ACC743B673DC9C147330837F918E8D3964(L_47, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_01c1:
	{
		uint8_t L_48 = V_0;
		if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0222;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_49 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_50 = XmlBufferReader_GetBuffer_mA8D442CFFAA68D23D6A6C86B1953D35269ADAFE7(L_49, 3, (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = L_50;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_51 = V_2;
		int32_t L_52 = V_1;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0203;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_55 = V_2;
		int32_t L_56 = V_1;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		uint8_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0203;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_59 = V_2;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)2));
		uint8_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0203;
		}
	}
	{
		String_t* L_63 = SR_GetString_m9C84EE1DB2BE4E43D84B7CC8E7738DF0037070B5(_stringLiteral261038AD75FEE541EDB50B8E89DD4F154F398F0D, /*hidden argument*/NULL);
		XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D * L_64 = (XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D *)il2cpp_codegen_object_new(XmlException_tD7DA2CBE07488D18EE7A284862B7523E3CD4365D_il2cpp_TypeInfo_var);
		XmlException__ctor_m3C6F865CCA07051F36F465F1BBE24251906765A9(L_64, L_63, /*hidden argument*/NULL);
		XmlExceptionHelper_ThrowXmlException_m02802D65B2201FFEC7F366C8F179E9120EA41A95(__this, L_64, /*hidden argument*/NULL);
	}

IL_0203:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_65 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_65);
		XmlBufferReader_SkipByte_mBBE9417EA44D4BFF43A03DDD9E97FE88CFFF0E8D(L_65, /*hidden argument*/NULL);
		XmlComplexTextNode_t74047090EF915900A82C23CB0AC333676842CE2C * L_66 = XmlBaseReader_MoveToComplexText_m200EC0074EBD7C688C48366D490E5D592DE7E9D2(__this, /*hidden argument*/NULL);
		NullCheck(L_66);
		ValueHandle_tB9C07B9354360F766C31F97E9C209E70545805B8 * L_67 = XmlNode_get_Value_m0473C4D12EBB393EA652557BBE2D17DC0B63AD3F(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		ValueHandle_SetCharValue_mFF3D88ACC743B673DC9C147330837F918E8D3964(L_67, ((int32_t)93), /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_0222:
	{
		uint8_t L_68 = V_0;
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_0233;
		}
	}
	{
		XmlUTF8TextReader_ReadText_m7228B80DD02629A4D5B1D5C6A1557EF501DCD248(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_023a;
	}

IL_0233:
	{
		uint8_t L_69 = V_0;
		XmlExceptionHelper_ThrowInvalidXml_m06A54081D6D97EC5A1A11932866FBF77C95D81DB(__this, L_69, /*hidden argument*/NULL);
	}

IL_023a:
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlUTF8TextReader::HasLineInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlUTF8TextReader_HasLineInfo_mA2CD17478BD83B2F285706A3B6980C861C4F03EB (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 System.Xml.XmlUTF8TextReader::get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_get_LineNumber_m36A87EE9FF4EC89477E7324F410DF4E71BD26A1E (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		XmlUTF8TextReader_GetPosition_mD809A62151A577738440B7A2CCE1BDCACBDBCEF1(__this, (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 System.Xml.XmlUTF8TextReader::get_LinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlUTF8TextReader_get_LinePosition_m0139491F4E6C7EC7CFC87AFB15D4B81C00B5F853 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		XmlUTF8TextReader_GetPosition_mD809A62151A577738440B7A2CCE1BDCACBDBCEF1(__this, (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_0 = V_1;
		return L_0;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::GetPosition(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader_GetPosition_mD809A62151A577738440B7A2CCE1BDCACBDBCEF1 (XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D * __this, int32_t* ___row0, int32_t* ___column1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_rowOffsets_42();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_1 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = XmlBufferReader_GetRows_m1277341CD79808CC7916D55C47AEBFDF36009AE6(L_1, /*hidden argument*/NULL);
		__this->set_rowOffsets_42(L_2);
	}

IL_0019:
	{
		XmlBufferReader_t6CE4037EA7FE6124276C7A14DB080CF42FCDE19A * L_3 = XmlBaseReader_get_BufferReader_m00ADF9A672EB77CEA631DAE1CB8FB4CEF1C07148(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = XmlBufferReader_get_Offset_m994E214EE49ECB50122EE9FE8031C45A0599EA96(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = 0;
		goto IL_002d;
	}

IL_0029:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_6 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = __this->get_rowOffsets_42();
		NullCheck(L_7);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))), (int32_t)1)))))
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = __this->get_rowOffsets_42();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0029;
		}
	}

IL_0047:
	{
		int32_t* L_13 = ___row0;
		int32_t L_14 = V_1;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t* L_15 = ___column1;
		int32_t L_16 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_17 = __this->get_rowOffsets_42();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_20)), (int32_t)1));
		return;
	}
}
// System.Void System.Xml.XmlUTF8TextReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUTF8TextReader__cctor_m5451423C196C9BDA69FA3CB5A6D297F007E9B39B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUTF8TextReader__cctor_m5451423C196C9BDA69FA3CB5A6D297F007E9B39B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t896E722795037F028FEBC71C9E1D7BD29CBE7797____9E8419627B46E6737DEF6B4A11ED2CFF7138723F_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_StaticFields*)il2cpp_codegen_static_fields_for(XmlUTF8TextReader_t5130B2890B31F44EFC78E6001865A1887991C33D_il2cpp_TypeInfo_var))->set_charType_46(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif