//////////////////////////////////////////GLOBAL VARIABLES//////////////////////////////////////////
float speed = 1;
bool parallelDrive = false;
float ArmRightCount = servo[ArmRight1];
float ArmLeftCount = servo[ArmLeft1];
bool nudgeDrive = false;
int ArmLeft1num =255;
int ArmLeft2num = 255;
int ArmRight1num = 0;
int ArmRight2num = 0;
////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////GLOBAL Functions//////////////////////////////////////////
void checkJoy1_y1();
void checkJoy1_y2();

void checkJoy2_y1();
void checkJoy2_y2();

void checkButtonsJoy1();
void checkButtonsJoy2();

task shortDrive;
void goInches(float inches, int speed);
void goTurn(float Degree, int speed);
float convertDegree(float Degree);
float convert(float inches);
