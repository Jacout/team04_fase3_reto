rule Regla

{

	strings:
		$cadena1 = "edu"
		$cadena2 = "malware"
		$cadena3 = "MAGIC"

	condition:
		$cadena1  or $cadena2

}
