namespace project
{

struct out_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "out";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "110.nT6K8CBesL..hbvEY.XpM.1RQrzPW2kqAwzSmg.YzJygaH0cK8y+4M6DAtHx+4ToHC6m6vtJYFSrH3KELIY1bof8RSW.6IMhrrZmPBG1SkhL6GywbN.1WpBuog2Jz6rOnfg8CqtnSTP..zXrEhB";
	}
};
}

