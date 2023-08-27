namespace project
{

struct vecfade_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "vecfade";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "1794.nT6K8CllmU7M.XBexZBzVD8.HEQ+L36wCHpkTE5w83mzHEOBqrIob2Yo98XvuK5t.QkjcLK.zBvj.HaLAsXHXL6ZRZfYcmxhrVVWKbtVqRlcjq5GsVFV.qzECao0f1NTUPp5vAmvG.lxtrbtWcPw0ZY2PT3zgrAt1UmK00hKStPcuTnurbATZxMQYSkfoIjLQtXbCOFZSRSUZtVML.bsF6xlYqpW0NJ4tIS6wTbMIKFVkymJZahtbYslpYV2HdAWaSVsiOW2rnZFUbMqzkCmqc4wA3ZV2IrKKHMqTUjHqGd.W6BM.v0H45VRlki.N.iTn0jrTgTsvfGnZ5iQrlxvB7nv90MvbppdHwU0ZMsAe.D.7PJUhYSTbvXAp.eGxQijcS18VgwNzvjjnf4OTblxn5fgIvBkuYBbG3b+0MS.EMO7npQffoAafq0DBVkSlxvwlkQ1rEtmfq3ZlXkrzv4ZXWVQDoSEepTbvltv4ZsZV8BSrTbp790AzpUbXKUpNRWLTtXuZoakFpZHWpQ3CnzjrY0paVGJ3.ZSpXZr0DlJt1DJTnKiOqZDFaYBIiOmNgZYD9O78lBtn2Sn2CBpUIhmgb+8t6T28o6Nj2+DxkdzkntavrWa9fKna+8lzl1O28YOaZ2NTC0y94xV1PMse9yo8rg5LX7f42qeuJPwO9xe9vG9wG5++k++e7gxO9v+e26lNfr8b3rm+CkuKiP4z8O5d3JS568c6PJ0C.t16OLR8KYctWb.ymFmuugSJ8BDxYKQC7bE8QHpridCmT1KnYCImuj1XcvXdFew2mPnKLCehjHIqxbzkOnreJEpoL3wxxBTgYstLSxq.Ou+QGJ6orgjPzRrjjgG3+TirRiLckYI6tgEfFY8A6ikDdfqIIl4GBrzshfZUUcDKUMBqR+ZXD9fuz8msvPkOemJgOERgyKmJaFG.rsb9j4clUmaUsf9xK1xvrRR2JuCAFMpAjkZjQ....fD.DV..fPNF6tMFHDVTjL.XHbHPbL.H...L.L..X..AFEvP.D..AQDoEwCfSey77AbnxIg8sSQzSMXSErer4S7T+GwsrRnoBZO0khmGnNkZTr5OhKjIlz60X202C5fvOBL9RlVpl3nZ.jVarxMRCbCfuEPotaWNyzxF7xAa2FU8VtrUXBGYLWQCEB3H4553Io2CarOfEYX12+u4.f5yXnxIYiesEKF7bPtbXh0shUiR2Dj9FwWFTHqLdgpJOH2aG2hF71d.652.GT+tIHBxFa3cJtArYvj7xh3QIBz8RHuSQFXa0Cslpc.v9d8ZVfopxx5Yb3fU.s6FXRMwAf8vFklhQbXGLFhoJ16mS6M5.xGsF.xRk85VEOV2fgrlKMCcLSS6sjNdIxZskU644o1iEDKkpDWXO.ZhXQ2VoacLK5j6ppi5x2ZWUtAmXDdyhf63r3JYUUcpXAIV45n3ZnybstptEzQIJrqJEPFfmU4AIKkP3O1v17sQXwkXVjlnJhIxhyDWwLQVv8lWNn03baaoB3f4uxx5zq9RDCqjO7n347fvjZghZ5HG.rTPVQsg1PcaE5pvH2LWS6dTtMIRWat58Z6iRuPntqCp4PaP.bUIYuUlAaz9C.MpHTF0F7csW3yYMcv3FRV.+NTwACX5F.ZFHjTZdnpHWty16Zhuq69NaUWG9tHWzYq55v3E4hNaUWGoL5FxslelcLGnC8aHAA7cnNedZPBbnjZrSnU7rtnJa2py16Zhuq69NaUWGRWza07ZGJeTkTcs3p2qMnbeEmMIb0rm4iYoXRhPCPfaGb5q+PiLsPQpx1PxNfVPaC0AIcVVM.v+1lGhsfPgGqhpi1+lIpqgzKITqq82TBXMsVSgyIPqp8yTJ0phYo.b267e8v7Hib4GlQYvbpKM2t4g0DdtWsaio8dvj5RZ8Sn8ehDIC5PP7DLJLmY.gSUFh0JDHVmV3tTAFUMQqH5IF7sElrYL.kIuvxLGaozo2zuTL0QiKLx.SKuH5dAzMbDUjMVGyfsE.CvJ37pSKogiQdionMuWj3WkT53nwFGFI9ZdtkIIS7x0YeTAY.MEdSs.ZEUDVwTVo0vYQjf8Xqk1aR5zWHway2H4GF0RKChpmYlrtHz0LO7QbaHJGhRs04yVuPzMQRq+ZJcFp.LvYTLCwgmAJvnYDA55kGNbynRptif4nGwuYX5ZgFW8SgVfJ+52wuxYvews82XpNGBEMgb+h5KV.fbUcedwJ9ACvZJa0Qe5PoQSeoVKYa0NixbGeoBEG8SQmWTgysG9+ehWqhByglclECqgGHT.4FO02XVSc86wJXcpf+UmqoU8TVwBK6mid99sZLz2Q.tlgheJl4GIxI48EGLhEB6sf4uO.qWKluRjO3hgLotPOgDXysTobkgRsnoq2L2l5OG";
	}
};
}
