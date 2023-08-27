namespace project
{

struct DspNetwork2_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "DspNetwork2";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "127.nT6K8CBo0N..xcLFZ.2RUXZG5FF1PG4lzGAn10CDfX5+WGOw1Zoe+++cjudgaCsUTjUKNACRdk88T2Bh2VpJMn21RgMNYDjWAUzRyvjl.P9UgOY9BFj7oUiUtEFihLic3FNtWhIP9DEG4YzbDtm.E.POF4CGvbyf6kvdHaXxD.";
	}
};
}

