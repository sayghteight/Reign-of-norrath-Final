
					<div class="posts_l"><a class="post_title">Registro de Usuario </a><br />

<p><b> Antes de empezar con tu registro de usuario, necesitamos que sepas una serie de normas, las cuales estan expuestas en un pdf en nuestra web. </b></p>
<strong> Las normas </strong> es un codigo de conducta que el usuario de Norrath debe seguir, la normativa se debe respetar lo maximo posible, el no hacerlo podr�a llevarte a una expulsi�n del juego.

<br/>
<br/>

    <form action="<?=$_SERVER['PHP_SELF']?>" method="post"> 
        <label>Usuario:</label><br /> 
        <input type="text"  class="form-control" name="usuario_nombre" maxlength="15" /><br /> 
        <label>Contrase�a:</label><br /> 
        <input type="password" class="form-control" placeholder="Tu Contrase�a" name="usuario_clave" maxlength="15" /><br /> 
        <label>Confirmar Contrase�a:</label><br /> 
        <input type="password"   class="form-control" placeholder="Tu Contrase�a" name="usuario_clave_conf" maxlength="15" /><br /> 
        <label>Email:</label><br /> 
        <input type="text"  class="form-control" name="usuario_email" maxlength="50" /><br /> 
<table width="950" border="0"> 
  <tr> 
    <td colspan="0"></td>     
  </tr> 
  <tr> 
    <td style="left:inherit"><input type="submit" name="enviar" value="Registrarse" class="btn btn-lg btn-info" /> </td> 
    <td style="right:inherit"><input type="reset"  class="btn btn-lg btn-info" value="Borrar" /></td> 
  </tr> 
</table>           



    </form> 

						</div>