namespace project
{

struct vec1b_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "vec1b";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "425.nT6K8C1oBzOC.XkEHYB.uhS.OTbOmlEY2DkZF8OGlFITvPQwcfjTSn.ppJvUUe+2BwX5GvC.8.fO.neaNzWwXXONcZ3Q3SC0ijiv2L1TsBzqY9tzQ1Sp2CNzyUsEU+9rOargXRdhmwQwVzBP+DJMzWgruXxVBnmytdS7XCmTbL1NzfzQgSIyokWbnOBJRRgIHIPRMH5kY8U6vcOVQ3LqkMDNek4QQw0KSeY0H..8GiqZKMhysSRt0cPFPLb3Il0kPSfGNzGV1TsAlP46iCiWkuOaDVA.8PH4Iu4IeWdD9rZOzWQYxVxmDuqrptx+zjEsV7erIiwQzf7uOKT6gUDpY18FLsAbajIIISSQqai100D3y2ldlwvDJeZibRRjhDYi.AAI8nPy.8WvUf4tENCHPQ.vgt5.PVF.eclmFKwEKOeCHvKnDZP.LR2HYGI+FbDCZ3xHi33yGvCvD1AAgJBoeyrgHgiCPiAt.ilj.+7vCyk4cLqQ3nxiAEC8kJt.gbAzKf85zfIhADqAD9Jgu8aS9hkrwsyOr1Z4g8LGRXc02J3PmILxrNx5kG.";
	}
};
}

