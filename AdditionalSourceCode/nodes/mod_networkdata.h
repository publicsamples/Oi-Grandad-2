namespace project
{

struct mod_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "mod";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "474.nT6K8CVpDTnC.XVD5TBDKia.6WKSIITMRTTnkE.h+9sNn9Cv2GbrF..PfFm5A.BtERY.t..L.3B.YndjMzwOzoXDrZlmkrQ5OEyPhU6lGYW8oAawpP2MkMEs4UL1pQRHVUizc36HAX07ImmVV4wV7GlBXrFnZn7mkJKb4tvDvYUchXUnor+thkrDG7LSzFLmUa8bxwMOznPGvRr5U2fRSYe4h0iM7KNcQ7yQW8KV4PTssdLE1BkqhMIpFBcHeiQxM.c2yufB.jBOHn+raPNxBfsON17ht+YMwXnHgSqwOOWNvyU9a4HRB5A2jX+SR.ho3hmftovYnFiqon.VRA.BBJFPB.hBglc.hiOGHEAfP3D.KfBvbRfxJ1HsFniDn7GjTJPWa0fzLaRWPiG0hOjsIOT7XisHIhYhoTCn1XQYkApIOqpK3dPuIFjAKZU8p3n.yJ4FhBRTOqwJWmlyYYfrFddGY.McKattsKRK.PWDfsdxgiTIW8fVWyEHvEadRtFJ08q2+CWdFOCIl7mH4kQreV.qQoA6ih.t44KRlgw0waHxH3sSW1D9rqBT7eXqd57EmbArc6NoJTcWbSkE6kHZY90vvr833tiLF5fN8vpbMj37FC3O1UPU5yuJ";
	}
};
}

