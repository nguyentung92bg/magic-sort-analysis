/* IL2CPP: Modules.Contexts.Home.WheelOfFortune.Scripts.UI.WheelOfFortuneAnimationConfig$$.ctor
void Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortuneAnimationConfig___ctor (Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortuneAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WheelOfFortune.Scripts.UI.WheelOfFortuneAnimationConfig$$.ctor
   void Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortuneAnimationConfig___ctor
   (Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortuneAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortuneAnimationConfig___ctor_3199928
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0577bf88;
  if ((bRam0000000005c31604 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05807d20);
    FUN_012d0dc8(PTR_DAT_057e0358);
    FUN_012d0dc8(PTR_DAT_0577bf88);
    FUN_012d0dc8(PTR_DAT_05809140);
    bRam0000000005c31604 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_05807d20;
  if (lVar3 != 0) {
    System_Collections_Generic_List_Vector3____ctor_2275524(lVar3,*(undefined8 *)PTR_DAT_05807d20);
    *(long *)(param_1 + 0x68) = lVar3;
    FUN_012d0d74((long *)(param_1 + 0x68),lVar3);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      System_Collections_Generic_List_Vector3____ctor_2275524(lVar3,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x70) = lVar3;
      FUN_012d0d74((long *)(param_1 + 0x70),lVar3);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_05809140;
      if (lVar3 != 0) {
        System_Collections_Generic_List_Vector3____ctor_2275524(lVar3,*(undefined8 *)puVar2);
        *(long *)(param_1 + 0x90) = lVar3;
        FUN_012d0d74((long *)(param_1 + 0x90),lVar3);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar2 = PTR_DAT_057e0358;
        if (lVar3 != 0) {
          System_Collections_Generic_List_object____ctor_21fc1fc
                    (lVar3,*(undefined8 *)PTR_DAT_057e0358);
          *(long *)(param_1 + 0x138) = lVar3;
          FUN_012d0d74(param_1 + 0x138,lVar3);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar3 != 0) {
            System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)puVar2);
            *(long *)(param_1 + 0x140) = lVar3;
            FUN_012d0d74(param_1 + 0x140,lVar3);
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar3 != 0) {
              System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)puVar2);
              *(long *)(param_1 + 0x148) = lVar3;
              FUN_012d0d74(param_1 + 0x148,lVar3);
              puVar1 = PTR_DAT_0576c200;
              if ((bRam0000000005c3a3d4 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_0576c200,0);
                bRam0000000005c3a3d4 = 1;
              }
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              System_Object___ctor_23dfe5c(param_1,0);
              if (pcRam0000000005c3a3d8 == (code *)0x0) {
                pcRam0000000005c3a3d8 = (code *)FUN_012d0d84(&UNK_043ee072);
              }
                    /* WARNING: Could not recover jumptable at 0x0418f4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c3a3d8)(param_1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

