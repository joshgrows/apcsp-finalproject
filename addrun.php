<!DOCTYPE html>
<html>
<head>
<title>Add a run</title>
</head>

<body>
<p> Enter Run information</p>
<?php
$time = $distance = $route = $output "";

?>
<form method="post" action="postrun">
Distance: <input type="text" name="distance"><br>
Time: <input type="text" name="time"><br>
Route: <input type="text" name="route"><br>
<br>
<input type="submit" value="Post">
</form>
<?php
$time= $_POST["time"];
$distance = $_POST["distance"];
$route = $_POST["route"];
exec("/usr/lib/cgi-bin/sp1a/addrun" . $time . $distance . $route, $output);
         echo "<h2>Program Output (an array):</h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";
         }
?>

</body>
</html>
