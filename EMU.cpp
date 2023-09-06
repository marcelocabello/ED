#include <stdio.h>

void desplegarDestinosCosteros(){
printf("1. Cancun\n2. Playa del Carmen\n3. Puerto Vallarta\n4. Los Cabos\n");
}

void desplegarDestinosInterior(){
printf("5. Ciudad de Mexico\n6. Guadalajara\n7. Monterrey\n8. Oaxaca\n");
}

void desplegarAtractivosCancun(){
printf("Atractivos en Cancun:\n1. Zona Hotelera\n2. Playa Delfines\n3. Ruinas mayas\n");
}

void desplegarAtractivosCDMX(){
printf("Atractivos en Ciudad de Mexico:\n1. Zocalo\n2. Chapultepec\n3. Coyoacan\n");
}

void desplegarHotelesCancun(){
printf("Hoteles en Cancun:\n1. Riu Palace ($1500/noche)\n2. The Royal ($2000/noche)\n3. Hyatt Zilara ($2500/noche)\n");
}

void desplegarHotelesCDMX(){
printf("Hoteles en Ciudad de Mexico:\n1. Hilton ($1000/noche)\n2. Marriott ($1500/noche)\n3. Intercontinental ($2000/noche)\n");
}

void desplegarTiposHabitacion(){
printf("Tipos de habitacion:\n1. Lujo\n2. Familiar\n3. Ejecutiva\n");
}

void desplegarTiposHotelCancun(){
printf("Tipos de hotel en Cancun:\n1. Familiar\n2. Heterosexuales\n3. Gay\n4. Pet Friendly\n5. De Lujo\n6. De Estancia Nocturna\n");
}

void desplegarTiposHotelCDMX(){
printf("Tipos de hotel en Ciudad de Mexico:\n1. Familiar\n2. De Negocios\n3. Boutique\n4. Historico\n5. De Lujo\n6. De Estancia Nocturna\n");
}

void desplegarFacilidadesTransporte(){
printf("Facilidades de transporte:\n1. Publico\n2. Privado\n3. Autobus\n4. Avion\n");
}

int main(){
desplegarDestinosCosteros();
desplegarDestinosInterior();

// Limpiar buffer de entrada
fflush(stdin);

char seleccion = getchar();

double precioBase = 0.0;

if(seleccion == '1'){
    desplegarAtractivosCancun();
    desplegarHotelesCancun();
    desplegarTiposHotelCancun();
    desplegarTiposHabitacion();
    desplegarFacilidadesTransporte();

    // Limpiar buffer de entrada
    fflush(stdin);

    char hotelSeleccionado = getchar();

    // Limpiar buffer de entrada
    fflush(stdin);

    char tipoHabitacionSeleccionada = getchar();

    // Calcular precio del paquete
    if (seleccion == '1' && hotelSeleccionado == '1' && tipoHabitacionSeleccionada == '1'){
precioBase = 1500.0;
} else if (seleccion == '1' && hotelSeleccionado == '1' && tipoHabitacionSeleccionada == '2'){
precioBase = 1000.0;
} else if (seleccion == '1' && hotelSeleccionado == '1' && tipoHabitacionSeleccionada == '3'){
precioBase = 1200.0;
} else {
printf("Opcion no valida");
return 0;
}



// Limpiar buffer de entrada
fflush(stdin);

char facilidadTransporteSeleccionada = getchar();

// Calcular precio final del paquete
double precioFinal = precioBase;
if(facilidadTransporteSeleccionada == '1'){
    precioFinal += 500.0;
} else if (facilidadTransporteSeleccionada == '2'){
    precioFinal += 1000.0;
} else if (facilidadTransporteSeleccionada == '3'){
    precioFinal += 300.0;
} else if (facilidadTransporteSeleccionada == '4'){
    precioFinal += 1500.0;
} else {
    printf("Opcion no valida");
    return 0;
}

printf("El precio final del paquete es: $%.2lf", precioFinal);

} else if (seleccion == '5'){
desplegarAtractivosCDMX();
desplegarHotelesCDMX();
desplegarTiposHotelCDMX();
desplegarTiposHabitacion();
desplegarFacilidadesTransporte();



// Limpiar buffer de entrada
fflush(stdin);

char hotelSeleccionado = getchar();

// Limpiar buffer de entrada
fflush(stdin);

char tipoHabitacionSeleccionada = getchar();

// Calcular precio del paquete
if(seleccion == '5' && hotelSeleccionado == '1' && tipoHabitacionSeleccionada == '1'){
    precioBase = 1000.0;
} else if (seleccion == '5' && hotelSeleccionado == '1' && tipoHabitacionSeleccionada == '2'){
    precioBase = 800.0;
} else if (seleccion == '5' && hotelSeleccionado == '1' && tipoHabitacionSeleccionada == '3'){
    precioBase = 1200.0;
} else {
    printf("Opcion no valida");
    return 0;
}

// Limpiar buffer de entrada
fflush(stdin);

char facilidadTransporteSeleccionada = getchar();

// Calcular precio final del paquete
double precioFinal = precioBase;
if(facilidadTransporteSeleccionada == '1'){
    precioFinal += 500.0;
} else if (facilidadTransporteSeleccionada == '2'){
    precioFinal += 1000.0;
} else if (facilidadTransporteSeleccionada == '3'){
    precioFinal += 300.0;
} else if (facilidadTransporteSeleccionada == '4'){
    precioFinal += 1500.0;
} else {
    printf("Opcion no valida");
    return 0;
}

printf("El precio final del paquete es: $%.2lf", precioFinal);

} else {
printf("Opcion no valida");
}

return 0;
}
