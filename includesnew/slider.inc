
  <div id="slideshow" class="ui-slideshow">
        <div class="slideshow">

				<a href="#"><div class="slide" id="slide-0"
					style="background-image: url('images/sliders/slide-panel-adventure.png'); ">

				</div></a>

				<a href="#"><div class="slide" id="slide-1"
					style="background-image: url('images/sliders/slide-panel-60-active.png'); display: none;">

				</div></a>

				<a href="#"><div class="slide" id="slide-2"
					style="background-image: url('images/sliders/slide-panel-contenido.png'); display: none;">

				</div></a>

				<a href="#"><div class="slide" id="slide-3"
					style="background-image: url('images/sliders/'); display: none;">

				</div></a>

				<a href="#"><div class="slide" id="slide-4"
					style="background-image: url('images/sliders/slide-panel-f2p.png'); display: none;">

				</div></a>
		</div>

	<div class="paging">
	 <a href="javascript:;" id="paging-0" onclick="Slideshow.jump(0, this);" class="current">
	   <div class="slide-panel-heading-1">Vive una aventura</div>
	   <div class="slide-panel-info-1">Te Aseguramos una autentica experiencia en los MMORPG</div>
	  </a>
	 
	 <a href="javascript:;" id="paging-1" onclick="Slideshow.jump(1, this);">
	   <div class="slide-panel-heading">Sube hasta nivel 60</div>
	   <div class="slide-panel-info">Nuestro maximo nivel de momento es 60</div>
	  </a>
	 
	 <a href="javascript:;" id="paging-2" onclick="Slideshow.jump(2, this);">
	   <div class="slide-panel-heading">Contenido Unico</div>
	   <div class="slide-panel-info">En Norrath solo encontraras cosas unicas</div>
	  </a>
	 
	 <a href="javascript:;" id="paging-3" onclick="Slideshow.jump(3, this);">
	   <div class="slide-panel-heading">Mundo Abierto</div>
	   <div class="slide-panel-info">Sientete libre de explorar norrath ...</div>
	  </a>
	 
	 <a href="javascript:;" id="paging-4" onclick="Slideshow.jump(4, this);" class="last-slide">
	   <div class="slide-panel-heading">Verdadero Free To Play</div>
	   <div class="slide-panel-info">Nos caracterizamos por llevar el genero F2P ....</div>
	  </a>
	
       </div>

		<div class="caption">
			<h3><a href="#" class="link">¡Bienvenido heroe de Norrath!</a></h3>
			Tiempos Oscuros se acercan en Norrath. Poderosas criaturas han emergido de las tinieblas para sembrar en los habitantes de Norrath una semilla de Odio y Temor. 
Heroe ahora mas que nunca necesitamos que nos ayudes y que derrotes a las criaturas que amenazan con una primera era de Oscuridad y terror.
		</div>
    </div>

        <script type="text/javascript">
        //<![CDATA[
        $(function() {
            Slideshow.initialize('#slideshow', [
                {
					image: "images/slide1.jpg",
					desc: "Los mundos de norrath estan repletos de criaturas , bestias , cofres secretos y misiones para asegurarte una aventura unica",
                    title: "¡Vive una aventura!",
                    url: "#",
                },
                {
					image: "images/sliders/slide-panel-60.png",
					desc: "Durante los días de desarrollo de Reign of Norrath se cambio 4 veces el max level . Como lo que queremos es ampliar el contenido el juego estara de momento hasta nivel 60 .",
                    title: "¡Maximo nivel 60!",
                    url: "#",
                },
                {
					image: "images/slide1.jpg",
					desc: "Adientrate en las numerosas novedades que te trae reign of norrath . Se un Explorador Rogue o un Guerrero Berserker o mismamente create una guild y construye una fortaleza o para los mas atrevidos ir solos a las numerosas Raids de Reign of Norrath",
                    title: "Contenido Unico",
                    url: "#",
                },
                {
					image: "images/slide1.jpg",
					desc: "Una de nuestras ventajas es que norrath es grandisima y no todas las misiones te abarcan todo el mapa . Pero quien sabe igual encuentras algo interesante o otras misiones que no son de la historia. ¡ Explora norrath y descubre todo!",
                    title: "Explora Norrath",
                    url: "#",
                },
		{
					image: "images/slide1.jpg",
					desc: "Eres miembro Gratuito no hay problema norrath te ofrece todo su contenido tanto a ti como a los miembros de pago asi que no te preocupes porque nuestra tienda se compone unicamente de objetos dificiles de conseguir en norrath por todo lo demas tu lo puedes conseguir siendo gratuito...",
                    title: "El Verdadero FREE TO PLAY",
                    url: "#",
		}
            ]);

        });
        //]]>
        </script>