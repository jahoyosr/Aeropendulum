function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Analog Input */
	this.urlHashMap["lecturaDedos:1"] = "lecturaDedos.c:33,125&lecturaDedos.h:78,92&lecturaDedos_data.c:22";
	/* <Root>/Analog Input1 */
	this.urlHashMap["lecturaDedos:3"] = "lecturaDedos.c:36,128&lecturaDedos.h:79,95&lecturaDedos_data.c:25";
	/* <Root>/Scope */
	this.urlHashMap["lecturaDedos:2"] = "lecturaDedos.h:86";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "lecturaDedos"};
	this.sidHashMap["lecturaDedos"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Analog Input"] = {sid: "lecturaDedos:1"};
	this.sidHashMap["lecturaDedos:1"] = {rtwname: "<Root>/Analog Input"};
	this.rtwnameHashMap["<Root>/Analog Input1"] = {sid: "lecturaDedos:3"};
	this.sidHashMap["lecturaDedos:3"] = {rtwname: "<Root>/Analog Input1"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "lecturaDedos:2"};
	this.sidHashMap["lecturaDedos:2"] = {rtwname: "<Root>/Scope"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
