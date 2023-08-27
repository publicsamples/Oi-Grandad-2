namespace project
{

struct recorder_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "recorder";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "355.nT6K8CVoAzrB.XwT+XBDKca.3IVUtaqn9qgliXhzXvJ11GAW79ysDYG...f5g0cF4NhRoHC.y.vM.X0nuL5U4zpcv6mpmYDcVsbKJ38gyJlWWy0bMCdkyXF84rzGRmVOsEf2IpD71.c5P8qBOTRw7lQ+NcBQYjegkEmXdWu5Sh9KLPSEZOsw1f+XM.J3cyd3rJAutVAuvOKywFQYkQ+S7lfkdQbOZFhbLenKmiLhYi3xjJMUVnhBhd.F9P3y.nJK3M6uhVlQXnIDH0XqOHm5Y18cPufWQE48j.4kfTS5w60E7o5Q9W7HiZZGOHumSBBO2q4ZCbNmTGvte0qalndHtA6qaVW60cy0cG.If.C..lTZnRanY40V5PD2XU23HVgyiZlOWFWQqArohOvbh2rGdAlXklH2.Srgs4rqfB4NhNPIig.9ficNhjgCsjX61gqVky9AF.GrC.WtOiTDFXYszRm1L.";
	}
};
}

