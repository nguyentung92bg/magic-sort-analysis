/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.ShuffleOrRevealBoosterView$$OnEnable
void Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleOrRevealBoosterView__OnEnable (Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleOrRevealBoosterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.ShuffleOrRevealBoosterView$$OnEnable
   void Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleOrRevealBoosterView__OnEnable
   (Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleOrRevealBoosterView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_ShuffleOrRevealBoosterView__OnEnable_1e9d120
               (long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2818e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2818e = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) &&
      (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar3,*(undefined8 *)PTR_DAT_057d9070), lVar3 != 0)) &&
     (((*(long *)(lVar3 + 0x18) != 0 &&
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x18) + 0x10), lVar3 != 0)) &&
      (lVar4 = *(long *)(param_1 + 0x18), lVar4 != 0)))) {
    lVar1 = 0x20;
    if (*(char *)(lVar3 + 0x19) != '\0') {
      lVar1 = 0x28;
    }
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    if (pcRam0000000005c3a730 == (code *)0x0) {
      pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
    }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a730)(lVar4,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

