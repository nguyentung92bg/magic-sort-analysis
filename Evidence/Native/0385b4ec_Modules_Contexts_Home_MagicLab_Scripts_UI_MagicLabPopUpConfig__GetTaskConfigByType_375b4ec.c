/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabPopUpConfig$$GetTaskConfigByType
Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabTaskConfigsByType_o* Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabPopUpConfig__GetTaskConfigByType (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabPopUpConfig_o* __this, int32_t magicLabTaskType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabPopUpConfig$$GetTaskConfigByType
   Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabTaskConfigsByType_o*
   Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabPopUpConfig__GetTaskConfigByType
   (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabPopUpConfig_o* __this, int32_t
   magicLabTaskType, const MethodInfo* method); */

long Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabPopUpConfig__GetTaskConfigByType_375b4ec
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
  
                    /* catch() { ... } // from try @ 0385b3f8 with catch @ 0385b4ec
                       catch() { ... } // from try @ 0385b4c4 with catch @ 0385b4ec */
                    /* catch() { ... } // from try @ 0385b350 with catch @ 0385b4f0
                       catch() { ... } // from try @ 0385b4b0 with catch @ 0385b4f0 */
                    /* try { // try from 0385b50c to 0395b50f has its CatchHandler @ 0385b584 */
  if ((bRam0000000005c33b85 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576bf28);
    FUN_012d0dc8(PTR_DAT_0575b9a0);
    FUN_012d0dc8(PTR_DAT_057dce70);
    FUN_012d0dc8(PTR_DAT_05788350);
    FUN_012d0dc8(PTR_DAT_058082c8);
                    /* try { // try from 0385b550 to 0395b583 has its CatchHandler @ 0385b63c */
    bRam0000000005c33b85 = 1;
  }
  puVar3 = PTR_DAT_058082c8;
  puVar2 = PTR_DAT_0576bf28;
  puVar1 = PTR_DAT_0575b9a0;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 0385b50c with catch @ 0385b584
                       try { // try from 0385b584 to 0395b5af has its CatchHandler @ 0385b288 */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_58,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05788350);
                    /* catch() { ... } // from try @ 0385b464 with catch @ 0385b594
                       catch() { ... } // from try @ 0385b4b4 with catch @ 0385b594 */
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_58,*(undefined8 *)puVar1), lVar5 = lStack_48, (uVar4 & 1) != 0
          ) {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
                    /* try { // try from 0385b5b0 to 0395b5c7 has its CatchHandler @ 0385b62c */
      if (*(int *)(lStack_48 + 0x10) == param_2) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_58,*(undefined8 *)puVar2);
        return lVar5;
      }
    }
                    /* try { // try from 0385b5c8 to 0395b617 has its CatchHandler @ 0385b288 */
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_58,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),0,*(undefined8 *)puVar3);
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

