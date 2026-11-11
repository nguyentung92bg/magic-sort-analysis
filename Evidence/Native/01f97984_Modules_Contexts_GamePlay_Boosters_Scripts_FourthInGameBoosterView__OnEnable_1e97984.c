/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.FourthInGameBoosterView$$OnEnable
void Modules_Contexts_GamePlay_Boosters_Scripts_FourthInGameBoosterView__OnEnable (Modules_Contexts_GamePlay_Boosters_Scripts_FourthInGameBoosterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.FourthInGameBoosterView$$OnEnable
   void Modules_Contexts_GamePlay_Boosters_Scripts_FourthInGameBoosterView__OnEnable
   (Modules_Contexts_GamePlay_Boosters_Scripts_FourthInGameBoosterView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_FourthInGameBoosterView__OnEnable_1e97984
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c28162 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c28162 = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) &&
      (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar3,*(undefined8 *)PTR_DAT_057d9070), lVar3 != 0)) &&
     (((*(long *)(lVar3 + 0x18) != 0 &&
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x18) + 0x10), lVar3 != 0)) &&
      (*(long *)(param_1 + 0x18) != 0)))) {
    iVar1 = *(int *)(lVar3 + 0x3c);
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x18),iVar1 == 2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),iVar1 == 1,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),1 < iVar1 - 1U,0);
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != 0) {
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar3,iVar1 - 1U < 2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

