	<div class="right-sidebar"> <!-- start right-sidebar -->
	  <div class="realmstatus"> <!-- start realmstatus -->
	    <div class="realmstatus-header"></div>
	    <div class="game-header">Reign of Norrath | Reinos</div>
	    <div class="realm"> <!-- start realm -->
	      <div class="realm-name">Proyecto Sha de la Ira (5.4.8)</div>	
		  <?php
			// Set IP and Port here
			if (!$socket = @fsockopen("reignofnorrath.es", 8085, $errno, $errstr, 5))
			{
			echo " <div class='status'><div class='offline'>Desconectado</div></div>";
			}
			else 
			{
			echo "<div class='status'><div class='online'>En Linea (Beta)</div></div>";
  

			fclose($socket);
			}
			?>
	      <div class="status-bar-bg">
	        <div class="status-bar">N/A</div>
	      </div> 
	      <div class="uptime"> <!-- start uptime -->
	        <div class="uptime-bold">Uptime:</div>
		<div class="uptime-time">N/A</div>
	      </div> <!-- end uptime -->
	    </div> <!-- end realm -->
    <div class="realm"> <!-- start realm -->
	      <div class="realm-name">DarkNorth </div>	
		  <?php
			// Set IP and Port here
			if (!$socket = @fsockopen("reignofnorrath.es", 8030, $errno, $errstr, 5))
			{
			echo " <div class='status'><div class='offline'>En Desarrollo</div></div>";
			}
			else 
			{
			echo "<div class='status'><div class='online'>En Linea (Beta)</div></div>";
  

			fclose($socket);
			}
			?>
	      <div class="status-bar-bg">
	        <div class="status-bar">N/A</div>
	      </div> 
	      <div class="uptime"> <!-- start uptime -->
	        <div class="uptime-bold">Uptime:</div>
		<div class="uptime-time">N/A</div>
	      </div> <!-- end uptime -->
	    </div> <!-- end realm -->
		
		
	    <div class="realmlist-bg">Versi&oacute;n <div style="color:orange;display:inline;">0.1 pre-beta</div></div>
	  </div> <!-- end realmstatus -->
