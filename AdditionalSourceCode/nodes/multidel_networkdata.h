namespace project
{

struct multidel_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "multidel";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "2191.nT6K8CFii1BQ.nKPzvvJ.CKZF.HTQqQqtBUU7wnDWJPPb1BDp17nQXXHo+prcaSQgm69w5p.PwYzREL.BC.s.n.lj1S2gqELe1xp8DaVDM0LXLGoaFLm0pS.CBmkl2Jggiyph5ubIyB1TwXptWTy0Kz7XLQSVrVeFbsBLIqZDFFyYYw.5kjlrvI+bPUmfzzMWwYrSY7vySYmhx.ttwDlC1DKGjkmuXLUrIO.gyZUAwY0UTe9ipTUM9XpCKqF6Amk8qppX1rfUGPOTuzslklfXCvY0QtpwFpoLTsBDNq2N8.GmU6o8zXRbVRS2JpuBK7auYblHVDNqKv.hyxCpoOx+CxiJyDdxBK91QjEtBUgJLXSvrRLfQgQQDpdJZEKfuPuVafj9La3opvjvVwTusdQilaD0mw2KLIpvh34v8gdJFEOfpaX++BKBGroheqFXSx2nKdUihpMno96DPRapxvDlnOylv9ZtUXRxXyeyTOlIJMd7FUHCvgq0mqJKhx7.lDMDDbABNKnOti0bru09aDwfJMnd6EawCnJlL7RSXnJlz4LPLVGoo3sVqJqUAL1FLlLXQDAhG9nalE4AOQQwx94ZzTNSPm.e8DIEoDIEYDNmhjBpD.9D5yWTdfoj3rgwlS1SYKeQmzaN3riz4Ck5zlS6B.mx4y4dD9ZTp6ThvfT4oxye0KA1DKe0QdZJxRDZy0u4SJaR282CjUf1jHNR3zRZIqFHcqbzAT99gk0hp9RSVKO.PD..rReUSReSJ005l6i2CHOXp5X2M5qqn0ZMaxDhKf37vgzMmYhJBURedr852yYfn6DruDEX.Xsl.SBDKdpx58dRmJmd3t2L5TLDAJmsrix1jBmCXRGW4p2trSQT5pmxgd6ZRHE1hNmByYf7d5Sm+dyV6HflazEVjmyaOukxdBiUX+KKnzQawm+jc.lvA5OWEwEtJww0hEFE9j8PKmDcNu6t6tgc6Zu0zIO3yc2c2mSb+4RmK5PYz4bNmy0NGz8hvHcJ48du26852K9fztMaY2fPHDBgxFBkPWz8d57XLFiwXKFmQIEHkW.B1DpxrXEyLyHB...PQhrR..v3XIgYoPMzIFTfjP.THj.LLjHPH..HHH.Ff....H.j..BQHJiDcUOQJkThzxm5h.TBTsVrQVHU2ethCSNjdTCbi4D9YnyGetGDU.HRSTp1qfSVnG2mNkHASdlCFRHIKVi52QGCQq1fzDfvCQcBEtAjM83HkyUARyNkLuthinUcLMrjclhZvZJGjKo8FUdMAAH8lhAXmbnXpo+ZMRC+byA8+bGb.NXFqk7aVZLGfSXf36X3ONNW4y.NCDUfTZjUoIQl9hijo.x4RVctUk9KlAUUFNzxGKbL1UlTOGInRiDm.kgrzOZjFStzM5dEz6JGCsLnnsz3dDQ4KogHEnPaPG.zDs.mZRSAgTVxKzD9GIZ9Nrs45IpQDjjxccI1aGIUCM0vidnG5K0qINZBcH0lZN+zxGoItdmB+VG913astZxaDPjnb2aB867jhJr0QMrqf9Pe8pDqEbzR64ec9k+27ZauNgcjgjPZW2hdcLS2JhcUzO5KdUhTgQCR1n1tIILeUArdsK+NYAtWEbbZQEnyVTSrkHfjk6ZSnWmoR0Fx6JzW7+GulH.YZCWZM0wmsf8i96bt1XOAcj.RPt6Mw9cHaJaHrqPew+6sDzDNUys7cE+mdac8MXMw6D.RTb2Kgd6bVYDwsMxK5+dKQqvqsR1+qMVAZLarJTFLhWUfzzVt3QEXBwJG5THhgRME.pJPX7RAGCJ5nPGJJjfNiGJKrQ1PAaS5AnPqJbTm8SXUXV8DXECZ8GcBSB+ZvIbftZnILANWYlvefmf7wDva3tDdwCZi4uD3FxzDYBENAlRlMsdJ7L0boqmVB8BcZfeYtC45NZ3YTb0EMFSnL9XTiXvGfNHwBJpmwW1xWNj4sf5QdT13OfPG60wKELUTXQlZP7L.y3VBszk6i8HjHjY2adMs86wDKIjCN3LCL8nonTDQWx85woGoW8DHCh+zvTHs7Iqb178urPNv2jPsFPoYC2rsQCL5j5JLItr.X+edVRFPrNp9Vq0vF5iF6WaFvo6JZ7Rh+ad4CyzfBA7jo7DgS9ldhNU48AgKj5M.2NlpsoinQwZ7jo2yBCk8n2k6IHWqSlBWCNRFudDpnAOipBw+V1cT27gR6sDNuDtgmsxiEu5JOlgKPtQb.ygORdgfUvrFggWxIN4YiFE5fikp3v2ON22pl78XiMyzF3YicHVPy.o3SUYrBSPRHbfKWT7nglhW7HYoamZGhlElGVByUXh4HdAENgqm8tS8HlW4yITV.tByDJjasfzqKJz5KABMqCeiOgPHFebiS8+LBlHchoTzjI1xdBJprsE0.CHLoVYG3KjUaDDAkY3+Y5Lx52ZKYK174wHdOgcjdXmdeWe5MHE.+D0cxw2KR7lVlXzvMl5VObixf338kdxZxPIuSAmv4xocA3Vws+DduFVD4pOc4ZO.PZc6BmqI5C23XRY3H1shqNhTEfQU440BbDQvNM.husay.eG73sd.7kGPu7RlfwogAf1CigIjXSrRZlIaVpH2I3BxDhykk4dN2L9aZr31GvRT15LqUE7QT3JQaTJHhVZsc1pfOWeJWJzZxUXgT8LZZdnH5iB5h.8QsgpW1W.s8cJIjAB7yH3KNzY69wYI160uk6szLXufvDA27TSrazm3vp6ZATISFf5jMgw4vuBApnQbelejSew1ExOl7EFUIk9WvGjGnoG90Y5huVlVHuLa8fqBnfgsSMvq3OUIdPOBj43zu3oKD+4PRMwV3ZJZgJTsmLNjraOjSz2crbeDcxMcydcVzWe1afpsVhoEmMK0dXuG9spdqHDeO0lQDz89rKOOzRziVi6yHVLkarw4eknhxonPNUc4nDxIy30C.";
	}
};
}
