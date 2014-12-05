

static const int LeftSide = 1;
static const int RightSide = 0;

static const int Forward = 2;
static const int Backward = 1;
static const int Ok = 3;

static const int ScoreAndCross = 0;
static const int preloadDump = 1;
static const int Cross = 2;
static const int Doubler = 3;
static const int Corrigated = 4;
static const int FarDump = 6;
static const int FarDumpMountain = 7;
static const int FarDumpBridge = 8;

static const int OtherSide = 0;
static const int Balance = 1;
static const int Block = 2;
static const int Score = 3;

static const int Ramp = 1;
static const int Bridge = 0;
static const int DoublerBlock = 2;


int strategy = Score;
int goal = preloadDump;
int block = Ramp;
int side = LeftSide;

void ChooseStrategy();
float convert(float inches);

float convertDegree(float Degree);
void goInches(float inches, int speed);

void goTurn(float Degree, int speed);
//void alignIR();

int speed = 75;
int Minspeed = 15;
int MountainSpeed = 60;
