# alertDialog Module

## Description

TODO: Add 'keyboardType' & 'hintText' support to Titanium.UI.AlertDialog with Ti.UI.iPhone.AlertDialogStyle.PLAIN_TEXT_INPUT

## Accessing the alertDialog Module

To access this module from JavaScript, you would do the following:

    var alertdialog = require("com.yallaya.alertDialog");

The alertdialog variable is a reference to the Module object.


### Functions

### createAlertDialog({ . . . })

Creates and returns an instance of Titanium.UI.AlertDialog.

#### Arguments

parameters[object]: a dictionary object of properties - Properties to set on a new object, including any defined by Titanium.UI.AlertDialog except those marked not-creation or read-only.

keyboardType: ex. Ti.UI.KEYBOARD_PHONE_PAD
hintText[String]

#### Example:

	var dialog = alertdialog.createAlertDialog({
		title: 'Alert with numeric keyboard and hintText!'
	    style: Ti.UI.iPhone.AlertDialogStyle.PLAIN_TEXT_INPUT,
		keyboardType: Ti.UI.KEYBOARD_PHONE_PAD,
		hintText: "Enter Phone Number"
	});

## Author

@nborracha - Nimrod Kobelkowsky. nimrod@yalla-ya.com

## License

TODO: Enter your license/legal information here.
