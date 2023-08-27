namespace project
{

struct in_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "in";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "253.nT6K8CVz.z4A.HbCsLBHqha.OXznXHBC27znAkvG0sBEcHcWTuCBBPBR.VhMtXXmRsJXqApvNR1hsKz4fQyuisC7yPYF8GCaBMapG+H1ZHzarMUt32T7GZQyEE3XfyANLVPv1n4S4OuwJBzEo7ueQbCxii7WjE.FAxIM+EAgQEWCaSN0R9yhlrEglR8zDSoBgD5XIs02PGGgdaCPSIQFp58XiU.glsj+nZxVrEaUnIzcSe+HgtkQyDVXQyIu+PreBjAHfoDYFGGnCt9AvmCLOXpzcLqbdJWp.vyMrUxyxRbFLNGWAv6.miSCnJ3vJNNCAhu3x8rgfk2MSQQzL.";
	}
};
}

