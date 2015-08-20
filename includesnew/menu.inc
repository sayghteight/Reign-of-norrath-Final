<?php 
    session_start(); 
    // comprobamos que se haya iniciado la sesión 
    if(isset($_SESSION['usuario_nombre'])) { 
?> 


						<li><a href="index.php">Inicio</a></li>
						<li><a href="http://comunidad.reignofnorrath.es">Comunidad</a></li>
					


    

<?php 
    }else { 
echo "
						<li><a href='index.php'>Inicio</a></li>
						<li><a href='http://comunidad.reignofnorrath.es'>Comunidad</a></li>
						<li><a href=''></a>
						<ul>
						<li><a href=''>Prueba</a></li>
						<li><a href=''>Prueba</a></li>
						<li><a href=''>Prueba</a></li>
						<li><a href=''>Prueba</a></li>
						</ul></li>
                                              <li>  <a href='register.php'>Registrarte</a></li>
												

";

 } 
?>		