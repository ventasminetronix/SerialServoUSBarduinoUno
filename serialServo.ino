/*codigo realizado por Evil-Demon
  para la empresa de Minetronix-Labs
  perteneciente al Ingeniero Jorge Alberto Rodriguez Euan 
  y la ingeniera Sandra Adriana Enciso Rios que son
  los patrocinadores del proyecto y consultores
  del proyecto.
  en proyectos posteriores con la incorporacion de
  las interfaces graficas su participacion sera mayor.
  instagram de evil demon: @strongerlife.zac
  instagram de sandy: @hexe.sandy
  instragram de alberto: albertronix.641
  siguenos y apoyanos para seguir subiendo proyectos de calidad
  si nos apoyas podremos invertir cada vex en mas proyectos de dominio 
  libre relacionados a la programacion en general
  todo el equipo de la empresa minetronix-labs 
  deseamos que el codigo sea de utilidad y nos siten en los proyectos
  que realicen, nos ayudaria muchisimo para tener un mayor impacto en el 
  mundo de la programacion.
  */

#include <Servo.h> 
int servo1;
int servo2;
int servo3;
int servo4;
int servo5;

Servo servoMotor1;
Servo servoMotor2;
Servo servoMotor3;
Servo servoMotor4;
Servo servoMotor5;

int servos[] = {servo1,servo2,servo3,servo4,servo5};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  servoMotor1.attach(9);
  servoMotor2.attach(10);
  servoMotor3.attach(11);
  servoMotor4.attach(12);
  servoMotor5.attach(13);
//posicionamiento de los servos en su posicion inicial
  servoMotor1.write(0);
  servoMotor2.write(0);
  servoMotor3.write(0);
  servoMotor4.write(0);
  servoMotor5.write(0);


}

void loop() {

  // por serial
  //( posicion1,posicion2,posicion3,posicion4,poscion5 )
  //al final de cada instruccion deve de haber un salto de linea
   if (Serial.available() > 0)
    { 
      servo1 = Serial.readStringUntil(',').toInt();
      servo2 = Serial.readStringUntil(',').toInt();
      servo3 = Serial.readStringUntil(',').toInt();
      servo4 = Serial.readStringUntil(',').toInt();
      servo5 = Serial.readStringUntil('\n').toInt();

      servoMotor1.write(servo1);
      servoMotor2.write(servo2);
      servoMotor3.write(servo3);
      servoMotor4.write(servo4);
      servoMotor5.write(servo5);
      Serial.print(servo1),Serial.print(","),Serial.print(servo2),Serial.print(","),Serial.print(servo3),Serial.print(","),Serial.print(servo4),Serial.print(","),Serial.print(servo5),Serial.print("\n");
      Serial.print("realizado!!!");
    }
}
