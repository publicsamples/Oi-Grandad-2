namespace project
{

struct send_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "send";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "692.nT6K8CFSGTUE.XMmbYB7Lq1pqHFac5g3NlgbZZnDX8hlN.ooB1NFjEGl.Zh2UONlyXj9A.E.QA.U.7bbysNLzYWO32RmY68xM30Y44kN3a9Z1PiW+XWGdu+x9Upk8AL6uw0Y0Qmwqun1a1Vm58BmasJoef9iWauTN7KQiYeN2wqoTowq2fubxuCAdWcJQauz70as2INjNzL92t3KRRHjDkjRF4PdMt6VuSdzXo4tK1S3qXlWSTmXtUMMP.6p4Brnyz5Fm+Pgdy0shYBYFm.FM2hGG9yu1DOyrZHVQSSvIoTF8DwO30b9MVcTJFgUQQDpfZs8YKH.N7En3wrUxjoigNy5FGkxLOoPwWmzXUxuF7LhYsC6ZgwC2EUaZ6f4Ero4nySsatSRjhok1sTKcGmAc6KN.u38dzbH3GiZ4C.g+PBgphvHTPPPJoJoDxcDet4WeH7.5MWybVRDjBBMIUEEQZRBBEEQ5O5dJFiRJpJpJ3iDZAr5MKi6wYQzUPnXDU.fEBZrwHyLyL.CH.BnF.D..BcV0YXcfcX5xv7RwIKLEzZ+i7nbxAGRZOdzgHd3M1nrzxzkUAfXIK5ogiUvcfkWFmRI6nEBpsk864vec.cYPPApa5B7iUu6vhy4hxnZCy.Ef1RyxqxbtX68QjCEMP4PFmVd+Y+Ab9..IMPzCXNCrn+TOnXHjCad36Baf2gd.+5I.XfvAmFL.ABMDPrwF7HqOKvTf0la7GRLGbNCHdV7IforHZMSjBWGvD22EQ.KKDxAEPMS9YLfdxigMfACAZNlY+oBFsNFNL3A9SqaRCzFlUDPwTPGvIVXPqbH+BfYfnLD+ATyA5w.ZWF4fG9HKdf4yaWToaLxyqNLJFbFf.XLir.WpA6CIc7FVZcHkwDXPCsDXKz7guq.g3.joFKtFTcVFpJ.eU.";
	}
};
}

