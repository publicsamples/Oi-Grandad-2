namespace project
{

struct exp_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "exp";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "389.nT6K8C1uAz8B.XLkCMB.yQeCLRJEIPAdP1OVM7y9H3duXdjYpZJb.9+6b8aDclOJkZC.1.fO.XsN50DrD5pLwpuD5tx4jePyUttnq57N4dVZ9eyIcyMVi07HMKmPa80foVu6M6TAjl6nN+39S1r0+jQIWFdyr65br9HkZ1veUzoA+pvZcwFWfqFdqOcViVXe0.4FVuz5CrzLa+2bBjla9RyuOLwkKRsPm5eivGF9LguJIXlscL4hp+CFwfYIIP4AHFOXHAHJLdZhnhDIxPB8oxhK7fEQCNE86euWhhBlQAGfNr.CCNz.SCBVyKfwxAwMVycIDBfl6t4KbTI8NdDluUTIzi7uYiG.DVbVQnRs9M9njaxI3obUWDEJU0BJPY.ic2NLJlplQHHJ.z.ymCCGpvBA2o3vlKQCbLuCkZSZ4QoLpltlXK1jNn.ShJeSRxDIcPvVHj9pyDQ61z0KzPvhLl+4qLtBivVMAIULqipGKjPbsh4h1AgES2iKMTady8.k0MF1pY.";
	}
};
}

