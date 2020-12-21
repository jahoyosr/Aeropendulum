function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Analog Input */
	this.urlHashMap["untitled:1"] = "untitled.c:33,121&untitled.h:78,91&untitled_data.c:22";
	/* <Root>/Scope */
	this.urlHashMap["untitled:2"] = "untitled.h:85";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Analog Input"] = {sid: "untitled:1"};
	this.sidHashMap["untitled:1"] = {rtwname: "<Root>/Analog Input"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "untitled:2"};
	this.sidHashMap["untitled:2"] = {rtwname: "<Root>/Scope"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
