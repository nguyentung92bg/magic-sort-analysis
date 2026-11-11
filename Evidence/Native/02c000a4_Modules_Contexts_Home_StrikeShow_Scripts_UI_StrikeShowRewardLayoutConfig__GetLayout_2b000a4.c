/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowRewardLayoutConfig$$GetLayout
Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowRewardLayoutConfig_LayoutEntry_o* Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowRewardLayoutConfig__GetLayout (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowRewardLayoutConfig_o* __this, int32_t rewardCount, bool isMiddle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowRewardLayoutConfig$$GetLayout
   Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowRewardLayoutConfig_LayoutEntry_o*
   Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowRewardLayoutConfig__GetLayout
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowRewardLayoutConfig_o* __this, int32_t
   rewardCount, bool isMiddle, const MethodInfo* method); */

long Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowRewardLayoutConfig__GetLayout_2b000a4
               (long param_1,int param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c2ec37 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581b260);
    FUN_012d0dc8(PTR_DAT_05814ac8);
    FUN_012d0dc8(PTR_DAT_0580fd08);
    FUN_012d0dc8(PTR_DAT_057e4150);
    bRam0000000005c2ec37 = 1;
  }
  puVar2 = PTR_DAT_0581b260;
  puVar1 = PTR_DAT_05814ac8;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  lVar5 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057e4150);
    do {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        lVar5 = 0;
        iVar4 = 6;
        goto LAB_02c0017c;
      }
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    } while ((*(int *)(lStack_38 + 0x10) != param_2) ||
            (*(byte *)(lStack_38 + 0x24) != (param_3 & 1)));
    iVar4 = 5;
    lVar5 = lStack_38;
LAB_02c0017c:
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar2);
    if (iVar4 != 5) {
      lVar5 = 0;
    }
  }
  return lVar5;
}

