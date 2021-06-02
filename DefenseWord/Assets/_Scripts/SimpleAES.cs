﻿using System;
using System.Security.Cryptography;
using System.IO;
using System.Text;
using UnityEngine;
public class SimpleAES
{
	public static String key = "ah9hf32908ap9wu3";
	public static String AES_encrypt(String Input, String key)
	{
		RijndaelManaged aes = new RijndaelManaged();
		//aes.KeySize = 256;
		aes.KeySize = 128;
		aes.BlockSize = 128;
		aes.Mode = CipherMode.CBC;
		aes.Padding = PaddingMode.PKCS7;
		aes.Key = Encoding.UTF8.GetBytes(key);
		aes.IV = new byte[] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

		var encrypt = aes.CreateEncryptor(aes.Key, aes.IV);
		byte[] xBuff = null;
		using (var ms = new MemoryStream())
		{
			using (var cs = new CryptoStream(ms, encrypt, CryptoStreamMode.Write))
			{
				byte[] xXml = Encoding.UTF8.GetBytes(Input);
				cs.Write(xXml, 0, xXml.Length);
			}

			xBuff = ms.ToArray();
		}

		String Output = Convert.ToBase64String(xBuff);
		return Output;
	}

	public static String AES_decrypt(String Input, String key)
	{
		RijndaelManaged aes = new RijndaelManaged();
		//aes.KeySize = 256;
		aes.KeySize = 128;
		aes.BlockSize = 128;
		aes.Mode = CipherMode.CBC;
		aes.Padding = PaddingMode.PKCS7;
		aes.Key = Encoding.UTF8.GetBytes(key);
		aes.IV = new byte[] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

		var decrypt = aes.CreateDecryptor();
		byte[] xBuff = null;
		using (var ms = new MemoryStream())
		{
			using (var cs = new CryptoStream(ms, decrypt, CryptoStreamMode.Write))
			{
				byte[] xXml = Convert.FromBase64String(Input);
				cs.Write(xXml, 0, xXml.Length);
			}

			xBuff = ms.ToArray();
		}

		String Output = Encoding.UTF8.GetString(xBuff);
		return Output;
	}
}