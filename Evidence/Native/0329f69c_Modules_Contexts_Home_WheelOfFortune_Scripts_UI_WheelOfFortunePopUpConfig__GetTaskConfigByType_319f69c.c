/* IL2CPP: Modules.Contexts.Home.WheelOfFortune.Scripts.UI.WheelOfFortunePopUpConfig$$GetTaskConfigByType
Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortuneConfigByType_o* Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortunePopUpConfig__GetTaskConfigByType (Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortunePopUpConfig_o* __this, int32_t wheelOfFortuneTaskType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WheelOfFortune.Scripts.UI.WheelOfFortunePopUpConfig$$GetTaskConfigByType
   Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortuneConfigByType_o*
   Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortunePopUpConfig__GetTaskConfigByType
   (Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortunePopUpConfig_o* __this, int32_t
   wheelOfFortuneTaskType, const MethodInfo* method); */

long Modules_Contexts_Home_WheelOfFortune_Scripts_UI_WheelOfFortunePopUpConfig__GetTaskConfigByType_319f69c
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000005c31630 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05768a30);
    FUN_012d0dc8(PTR_DAT_057a63d8);
    FUN_012d0dc8(PTR_DAT_057d8168);
    FUN_012d0dc8(PTR_DAT_0581aa38);
    FUN_012d0dc8(PTR_DAT_0575ddb8);
    bRam0000000005c31630 = 1;
  }
  puVar3 = PTR_DAT_057a63d8;
  puVar2 = PTR_DAT_05768a30;
  puVar1 = PTR_DAT_0575ddb8;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_58,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0581aa38);
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_58,*(undefined8 *)puVar3), lVar5 = lStack_48, (uVar4 & 1) != 0
          ) {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(int *)(lStack_48 + 0x10) == param_2) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_58,*(undefined8 *)puVar2);
        return lVar5;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_58,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),0,*(undefined8 *)puVar1);
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

