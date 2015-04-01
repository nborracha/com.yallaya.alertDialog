// This is a test harness for your module
// You should do something interesting in this harness
// to test out the module and to provide instructions
// to users on how to use it by example.


// open a single window
var win = Ti.UI.createWindow({
	backgroundColor:'white'
});
var label = Ti.UI.createLabel();
win.add(label);
win.open();

// TODO: write your module tests here
var alertdialog = require('com.yallaya.alertDialog');
Ti.API.info("module is => " + alertdialog);

if (Ti.Platform.name == "iphone") {

	var proxy = alertdialog.createAlertDialog({
		title: "Business Number",
		  style: Ti.UI.iPhone.AlertDialogStyle.PLAIN_TEXT_INPUT,
		  keyboardType: Ti.UI.KEYBOARD_PHONE_PAD,
		  hintText: "Enter Phone Number",
		  buttonNames: ['OK']
	});
	proxy.show();
}

