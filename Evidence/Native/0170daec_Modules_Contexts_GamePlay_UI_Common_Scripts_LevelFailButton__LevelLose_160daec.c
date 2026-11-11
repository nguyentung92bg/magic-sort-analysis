/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.LevelFailButton$$LevelLose
void Modules_Contexts_GamePlay_UI_Common_Scripts_LevelFailButton__LevelLose (Modules_Contexts_GamePlay_UI_Common_Scripts_LevelFailButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.LevelFailButton$$LevelLose
   void Modules_Contexts_GamePlay_UI_Common_Scripts_LevelFailButton__LevelLose
   (Modules_Contexts_GamePlay_UI_Common_Scripts_LevelFailButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_LevelFailButton__LevelLose_160daec(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2444b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791da0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575bba8);
    bRam0000000005c2444b = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 == 0)) ||
     (plVar3 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar2,*(undefined8 *)PTR_DAT_05791da0), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575bba8) {
        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_0170dbbc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0575bba8,4);
LAB_0170dbbc:
                    /* WARNING: Could not recover jumptable at 0x0170dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar3,1,puVar4[1]);
  return;
}

