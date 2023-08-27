namespace project
{

struct am_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "am";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "321.nT6K8ClgAzaB.XVT4PBDKia.uBJql8QtxHAMKfX+5iB2sHJEXvChL...WrdF2Jo8mjgK.7B.u.vz0I3rpO4erq1XMVigVM9OKoCQOvNq5dwu5xE7ox7PnApkleVEAEbVsh7yL8GAOjBGvyRfVw8PIQlZ3w.GoV9j+QypM1Y0ItkUe45.M95JGS5wWOiuiEX0pYScI+vpNFXCQi+a57X7azr50aJ8KujpYUDJjVHwPZBQBNZUIlG9MXThuIlW5PIsKBrkDrrpYagijsCcLjdnoXwTALPHkXh03AXnF6PCsCswZLGeNdVU5S2RKaJUmObAFf.Hf.EhHVg7gZCr2BJLidYILz6xvPjFZEelQIKITlYfsASUtiwkyS4xJv3v8EsCJLCFmiiAv0AJGmVP0gqAFiK67cfwEGN+feNfH2gZECy.";
	}
};
}

