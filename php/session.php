<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
<?
	if(!isset($_SESSION['user']))
		session_start();

	$_SESSION['user'] = "Denver";
	

	if(isset($_SESSION['user']))
		echo "Logged in as " . $_SESSION['user'];
	
?>
</body>
</html>