/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$IsSnitchActive
bool Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__IsSnitchActive (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$IsSnitchActive
   bool Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__IsSnitchActive
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__IsSnitchActive_1f17da4
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c28640 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f67a8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c28640 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
        (lVar5 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar5 != 0)) &&
       (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar5,*(undefined8 *)PTR_DAT_057f67a8), lVar5 != 0)) {
      uVar4 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__IsEligible_246d454(lVar5,0);
      if ((uVar4 & 1) == 0) {
        bVar2 = false;
      }
      else {
        iVar3 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__GetProgress_246d528(lVar5);
        lVar5 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__GetConfig_246d568(lVar5);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        bVar2 = *(int *)(lVar5 + 0x18) <= iVar3;
      }
      return bVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return false;
}

