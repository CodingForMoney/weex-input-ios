# weex-input-ios

add some support for `<input>` only on iOS , it's hard to support on Android and Web😭


## Usage

Register Compoment

	[WXSDKEngine registerComponent:@"lxinput" withClass:[LXTextInputComponent class]];
	
Use it like `<input>` . I will merge master change to this `lxinput` ,and support more feature maybe.

## new feature

* default placeholder  veritical center
* `placeholder-font-size` : new attribute for set the placeholder font size.

		.input {
			placeholder-font-size: 30px;
		}


## TODO

* pod