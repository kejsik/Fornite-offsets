#define GWORLD = 0xEEDBD10
#define FNAME = 0xEEFE2C0
#define RESULT_DA = 0xEE02330

-DECRYPT ANSI-
NOT TESTED
uintptr_t FNameOffset = 0xEEFE2C0;
uintptr_t value = 0xEE02330;

         char* v2; // rdi
        unsigned int v4; // ebx
        __int64 result; // rax
        unsigned int v6; // edx
        unsigned int v7; // er8

char* v2; // rbx
        int v4; // edi
        unsigned int v5; // eax
        __int64 result; // rax
        int v7; // er8
        unsigned int v8; // edx

        v2 = buffer;

        v4 = Lenght;

        result = read<unsigned int>(module + value) >> 5;
        v7 = 0;
        if (v4)
        {
            do
            {
                v8 = *v2++;
                result = (unsigned int)(v7 + result + 96);
                ++v7;
                *(v2 - 1) = (16 * v8) | (result ^ (v8 >> 4)) & 0xF;
            } while (v7 < v4);
        } } while (result);
        }

Gworld : 0xEEDBD10
FName : 0xwaitIDA
GameInstance : 0x1B8
LocalPlayerArray : 0x38
PlayerController : 0x30
AcknowledgedPawn : 0x330
RootComponent : 0x190
RelativeLocation : 0x128
TeamIndex : 0x10A0
CurrentWeapon : 0x8F8
PlayerState : 0x2A8
Mesh : 0x310
ItemDefinition : 0x18
Tier : 0x73
DisplayName : 0x90
Bones Array : 0x5F8
Bones cache : 0x608


credits to efk
