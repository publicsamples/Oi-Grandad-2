namespace project
{

struct fx_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "fx";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "518.nT6K8ClfCT9C.XW1QUBDQxMvZwXTDPY8evrEDL6YEnr9Q.hrzJDxHWUU0x+6xpunerSAIAfR.PD.KF.sskdLr4kLMrSQMWOkZlQqQLBscJaRIyUMKZJ4Qaeo5Ds11zr.skVovt9JVminn0oKYppT3nVUwvhwBGPaePhGsMiqJGY+D43.8bsT53zzrBskiOiJCfYNwg+MplUPolvsExaMulT1kAnI8RR+EVPr9BXdIpDRZscmYyGv7UWrpNzfc8YUTV3DVopkEXPotXBBQvPh9Br.AHePQW6cz4dOTvOfh9CpefdD5PGzCzoedQGRFajbDoircjt2OQ1E1w9Igc6ZjtCGYyDQ+Mz3ujvE7hvn6IvJg9KFeOt7wkNj6sz0NjVqAiE9fLypWxhGaNcgMP5qtXRgfGnCpJW9rWpNYwfRMkUqVU7FJcQor89wYlYnnzAiuHkZFfDHv.LFTYIOtMxYRrDHNQZVSRbLshZ9Abt6LXCKGBAGBDZCMCF4OvEG1V2AyihYHBf3gDhLv0FnHN.AhCxmbGnEIrlLJSYLZGfwtEM4f7.fqC.RWXHri9FKhOj.GjGuAHbNPaECxktE5XrHc0zBfHvT7OAlhLSXfV6FwnCA.b..fKYN9GVXM.OTggeNm2yHc8MDvL2AyNrRCAFu.o4wGf4.WhE1HSwxZaAqa.Hx..4.Xx.";
	}
};
}

