#define BOTON 3

bool sistemaEncendido = true;
bool estadoAnterior = HIGH;

void setup()
{
  pinMode(BOTON, INPUT_PULLUP);
}

void loop()
{
  bool estadoActual = digitalRead(BOTON);

  // Detecta una pulsación
  if (estadoAnterior == HIGH && estadoActual == LOW)
  {
    sistemaEncendido = !sistemaEncendido;
    delay(200); // Antirrebote
  }

  estadoAnterior = estadoActual;

  if (sistemaEncendido)
  {
    // Aquí va el código del sistema encendido
    // (NeoPixel funcionando normalmente)
  }
  else
  {
    // Aquí apagarás todos los NeoPixel
    // Ring.clear();
    // Ring.show();

    // La LCD seguirá mostrando los datos del sensor
  }
}
