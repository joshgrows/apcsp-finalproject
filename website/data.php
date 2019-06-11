<!DOCTYPE html>

<html>
  <head>
    <title>Runner</title>
  <link rel="stylesheet" href="runnerStyle.css" >
  </head>
  <body>
   <h1>Run Tracker</h1>
    <ul>
      <li><button><a href="">About</a></button></li>
      <li><button><a href="runner.html">Input</a></button></li>
      <li><button><a href="data.php">Data</a></button></li>
      <li class="right"><button><a href=login.php>login</a></button></li>
    </ul>
  <h2>Your Data</h2>
  <?php
    echo file_get_contents("runinfo.txt")
  ?>
  </body>
</html>
