function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Gain */
	this.urlHashMap["SMC_packachazo:49"] = "SMC_packachazo.c:177&SMC_packachazo.h:172,259&SMC_packachazo_data.c:62";
	/* <Root>/Gain3 */
	this.urlHashMap["SMC_packachazo:1"] = "SMC_packachazo.c:195&SMC_packachazo.h:174,262&SMC_packachazo_data.c:65";
	/* <Root>/Scope */
	this.urlHashMap["SMC_packachazo:68"] = "SMC_packachazo.h:182";
	/* <Root>/Scope1 */
	this.urlHashMap["SMC_packachazo:69"] = "SMC_packachazo.h:186";
	/* <Root>/Scope2 */
	this.urlHashMap["SMC_packachazo:4"] = "SMC_packachazo.h:190";
	/* <Root>/Scope3 */
	this.urlHashMap["SMC_packachazo:5"] = "SMC_packachazo.h:194";
	/* <Root>/Sign */
	this.urlHashMap["SMC_packachazo:6"] = "SMC_packachazo.c:184,196";
	/* <Root>/Sum2 */
	this.urlHashMap["SMC_packachazo:21"] = "SMC_packachazo.c:181&SMC_packachazo.h:173";
	/* <S1>/Analog Input */
	this.urlHashMap["SMC_packachazo:92"] = "SMC_packachazo.c:141,147,459&SMC_packachazo.h:277&SMC_packachazo_data.c:80";
	/* <S1>/Constant1 */
	this.urlHashMap["SMC_packachazo:58"] = "SMC_packachazo.c:238&SMC_packachazo.h:274&SMC_packachazo_data.c:77";
	/* <S1>/Constant2 */
	this.urlHashMap["SMC_packachazo:59"] = "SMC_packachazo.c:145&SMC_packachazo.h:235&SMC_packachazo_data.c:32";
	/* <S1>/Gain */
	this.urlHashMap["SMC_packachazo:62"] = "SMC_packachazo.c:146&SMC_packachazo.h:280&SMC_packachazo_data.c:83";
	/* <S1>/Gain1 */
	this.urlHashMap["SMC_packachazo:63"] = "SMC_packachazo.c:170&SMC_packachazo.h:171,256&SMC_packachazo_data.c:59";
	/* <S1>/Gain11 */
	this.urlHashMap["SMC_packachazo:65"] = "SMC_packachazo.c:158&SMC_packachazo.h:169,247&SMC_packachazo_data.c:50";
	/* <S1>/Gain12 */
	this.urlHashMap["SMC_packachazo:66"] = "SMC_packachazo.c:167&SMC_packachazo.h:170,250&SMC_packachazo_data.c:53";
	/* <S1>/Ref */
	this.urlHashMap["SMC_packachazo:51"] = "SMC_packachazo.c:171&SMC_packachazo.h:253&SMC_packachazo_data.c:56";
	/* <S1>/Saturation */
	this.urlHashMap["SMC_packachazo:53"] = "SMC_packachazo.c:200,212&SMC_packachazo.h:265,268&SMC_packachazo_data.c:68,71";
	/* <S1>/State-Space1 */
	this.urlHashMap["SMC_packachazo:70"] = "SMC_packachazo.c:153,159,331,468&SMC_packachazo.h:199,204,209,226,238,241,244&SMC_packachazo_data.c:22,36,41,46";
	/* <S1>/Sum1 */
	this.urlHashMap["SMC_packachazo:71"] = "SMC_packachazo.c:144&SMC_packachazo.h:168";
	/* <S1>/Sum2 */
	this.urlHashMap["SMC_packachazo:89"] = "SMC_packachazo.c:172";
	/* <S1>/Sum5 */
	this.urlHashMap["SMC_packachazo:72"] = "SMC_packachazo.c:231";
	/* <S1>/U_eq1 */
	this.urlHashMap["SMC_packachazo:73"] = "SMC_packachazo.c:230&SMC_packachazo.h:271&SMC_packachazo_data.c:74";
	/* <S2>/Data Type Conversion */
	this.urlHashMap["SMC_packachazo:91:114"] = "SMC_packachazo.c:237,250";
	/* <S2>/Digital Output */
	this.urlHashMap["SMC_packachazo:91:214"] = "SMC_packachazo.c:252,465&SMC_packachazo.h:232&SMC_packachazo_data.c:29";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["SMC_packachazo:90:114"] = "SMC_packachazo.c:202,205,208,214";
	/* <S3>/PWM */
	this.urlHashMap["SMC_packachazo:90:215"] = "SMC_packachazo.c:225,462&SMC_packachazo.h:229&SMC_packachazo_data.c:26";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "SMC_packachazo"};
	this.sidHashMap["SMC_packachazo"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "SMC_packachazo:7"};
	this.sidHashMap["SMC_packachazo:7"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "SMC_packachazo:91"};
	this.sidHashMap["SMC_packachazo:91"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "SMC_packachazo:90"};
	this.sidHashMap["SMC_packachazo:90"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/Gain"] = {sid: "SMC_packachazo:49"};
	this.sidHashMap["SMC_packachazo:49"] = {rtwname: "<Root>/Gain"};
	this.rtwnameHashMap["<Root>/Gain3"] = {sid: "SMC_packachazo:1"};
	this.sidHashMap["SMC_packachazo:1"] = {rtwname: "<Root>/Gain3"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "SMC_packachazo:68"};
	this.sidHashMap["SMC_packachazo:68"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Scope1"] = {sid: "SMC_packachazo:69"};
	this.sidHashMap["SMC_packachazo:69"] = {rtwname: "<Root>/Scope1"};
	this.rtwnameHashMap["<Root>/Scope2"] = {sid: "SMC_packachazo:4"};
	this.sidHashMap["SMC_packachazo:4"] = {rtwname: "<Root>/Scope2"};
	this.rtwnameHashMap["<Root>/Scope3"] = {sid: "SMC_packachazo:5"};
	this.sidHashMap["SMC_packachazo:5"] = {rtwname: "<Root>/Scope3"};
	this.rtwnameHashMap["<Root>/Sign"] = {sid: "SMC_packachazo:6"};
	this.sidHashMap["SMC_packachazo:6"] = {rtwname: "<Root>/Sign"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "SMC_packachazo:7"};
	this.sidHashMap["SMC_packachazo:7"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Sum2"] = {sid: "SMC_packachazo:21"};
	this.sidHashMap["SMC_packachazo:21"] = {rtwname: "<Root>/Sum2"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "SMC_packachazo:8"};
	this.sidHashMap["SMC_packachazo:8"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Analog Input"] = {sid: "SMC_packachazo:92"};
	this.sidHashMap["SMC_packachazo:92"] = {rtwname: "<S1>/Analog Input"};
	this.rtwnameHashMap["<S1>/Constant1"] = {sid: "SMC_packachazo:58"};
	this.sidHashMap["SMC_packachazo:58"] = {rtwname: "<S1>/Constant1"};
	this.rtwnameHashMap["<S1>/Constant2"] = {sid: "SMC_packachazo:59"};
	this.sidHashMap["SMC_packachazo:59"] = {rtwname: "<S1>/Constant2"};
	this.rtwnameHashMap["<S1>/Demux2"] = {sid: "SMC_packachazo:61"};
	this.sidHashMap["SMC_packachazo:61"] = {rtwname: "<S1>/Demux2"};
	this.rtwnameHashMap["<S1>/Digital Output"] = {sid: "SMC_packachazo:91"};
	this.sidHashMap["SMC_packachazo:91"] = {rtwname: "<S1>/Digital Output"};
	this.rtwnameHashMap["<S1>/Gain"] = {sid: "SMC_packachazo:62"};
	this.sidHashMap["SMC_packachazo:62"] = {rtwname: "<S1>/Gain"};
	this.rtwnameHashMap["<S1>/Gain1"] = {sid: "SMC_packachazo:63"};
	this.sidHashMap["SMC_packachazo:63"] = {rtwname: "<S1>/Gain1"};
	this.rtwnameHashMap["<S1>/Gain11"] = {sid: "SMC_packachazo:65"};
	this.sidHashMap["SMC_packachazo:65"] = {rtwname: "<S1>/Gain11"};
	this.rtwnameHashMap["<S1>/Gain12"] = {sid: "SMC_packachazo:66"};
	this.sidHashMap["SMC_packachazo:66"] = {rtwname: "<S1>/Gain12"};
	this.rtwnameHashMap["<S1>/Mux1"] = {sid: "SMC_packachazo:67"};
	this.sidHashMap["SMC_packachazo:67"] = {rtwname: "<S1>/Mux1"};
	this.rtwnameHashMap["<S1>/PWM"] = {sid: "SMC_packachazo:90"};
	this.sidHashMap["SMC_packachazo:90"] = {rtwname: "<S1>/PWM"};
	this.rtwnameHashMap["<S1>/Ref"] = {sid: "SMC_packachazo:51"};
	this.sidHashMap["SMC_packachazo:51"] = {rtwname: "<S1>/Ref"};
	this.rtwnameHashMap["<S1>/Saturation"] = {sid: "SMC_packachazo:53"};
	this.sidHashMap["SMC_packachazo:53"] = {rtwname: "<S1>/Saturation"};
	this.rtwnameHashMap["<S1>/State-Space1"] = {sid: "SMC_packachazo:70"};
	this.sidHashMap["SMC_packachazo:70"] = {rtwname: "<S1>/State-Space1"};
	this.rtwnameHashMap["<S1>/Sum1"] = {sid: "SMC_packachazo:71"};
	this.sidHashMap["SMC_packachazo:71"] = {rtwname: "<S1>/Sum1"};
	this.rtwnameHashMap["<S1>/Sum2"] = {sid: "SMC_packachazo:89"};
	this.sidHashMap["SMC_packachazo:89"] = {rtwname: "<S1>/Sum2"};
	this.rtwnameHashMap["<S1>/Sum5"] = {sid: "SMC_packachazo:72"};
	this.sidHashMap["SMC_packachazo:72"] = {rtwname: "<S1>/Sum5"};
	this.rtwnameHashMap["<S1>/U_eq1"] = {sid: "SMC_packachazo:73"};
	this.sidHashMap["SMC_packachazo:73"] = {rtwname: "<S1>/U_eq1"};
	this.rtwnameHashMap["<S1>/x_1"] = {sid: "SMC_packachazo:19"};
	this.sidHashMap["SMC_packachazo:19"] = {rtwname: "<S1>/x_1"};
	this.rtwnameHashMap["<S1>/x_2"] = {sid: "SMC_packachazo:20"};
	this.sidHashMap["SMC_packachazo:20"] = {rtwname: "<S1>/x_2"};
	this.rtwnameHashMap["<S1>/x_3"] = {sid: "SMC_packachazo:86"};
	this.sidHashMap["SMC_packachazo:86"] = {rtwname: "<S1>/x_3"};
	this.rtwnameHashMap["<S1>/x_4"] = {sid: "SMC_packachazo:87"};
	this.sidHashMap["SMC_packachazo:87"] = {rtwname: "<S1>/x_4"};
	this.rtwnameHashMap["<S1>/x_5"] = {sid: "SMC_packachazo:88"};
	this.sidHashMap["SMC_packachazo:88"] = {rtwname: "<S1>/x_5"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "SMC_packachazo:91:116"};
	this.sidHashMap["SMC_packachazo:91:116"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion"] = {sid: "SMC_packachazo:91:114"};
	this.sidHashMap["SMC_packachazo:91:114"] = {rtwname: "<S2>/Data Type Conversion"};
	this.rtwnameHashMap["<S2>/Digital Output"] = {sid: "SMC_packachazo:91:214"};
	this.sidHashMap["SMC_packachazo:91:214"] = {rtwname: "<S2>/Digital Output"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "SMC_packachazo:90:116"};
	this.sidHashMap["SMC_packachazo:90:116"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "SMC_packachazo:90:114"};
	this.sidHashMap["SMC_packachazo:90:114"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/PWM"] = {sid: "SMC_packachazo:90:215"};
	this.sidHashMap["SMC_packachazo:90:215"] = {rtwname: "<S3>/PWM"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
