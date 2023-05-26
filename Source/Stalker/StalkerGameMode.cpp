#include "StalkerGameMode.h"
#include "UObject/ConstructorHelpers.h"

AStalkerGameMode::AStalkerGameMode(): Super()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}
