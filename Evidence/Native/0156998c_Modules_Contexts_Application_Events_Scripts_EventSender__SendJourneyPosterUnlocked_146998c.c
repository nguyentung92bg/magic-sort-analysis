/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJourneyPosterUnlocked
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyPosterUnlocked (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t level, System_String_o* unlockedPosterId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJourneyPosterUnlocked
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyPosterUnlocked
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t level,
   System_String_o* unlockedPosterId, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyPosterUnlocked_146998c
               (undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iStack_44;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c237c8 & 1) == 0) {
                    /* try { // try from 015699c8 to 016699d7 has its CatchHandler @ 015699d8 */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* catch() { ... } // from try @ 015698d4 with catch @ 015699d8
                       catch() { ... } // from try @ 015699c8 with catch @ 015699d8 */
                    /* try { // try from 015699dc to 016699df has its CatchHandler @ 015699e8 */
                    /* try { // try from 015699e0 to 016699eb has its CatchHandler @ 0156973c */
    FUN_012d0dc8(PTR_DAT_057db748);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 015699dc with catch @ 015699e8
                        */
    FUN_012d0dc8(PTR_DAT_057f0c30);
    FUN_012d0dc8(PTR_DAT_057d2c18);
    FUN_012d0dc8(PTR_DAT_057e42f8);
    bRam0000000005c237c8 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar4 = PTR_DAT_057e42f8;
  puVar3 = PTR_DAT_057db748;
  puVar2 = PTR_DAT_057d2c18;
  puVar1 = PTR_DAT_0575f9f0;
  if (lVar5 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar5,*(undefined8 *)PTR_DAT_057f0c30,0);
    iStack_44 = param_2;
    uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_44);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar5,*(undefined8 *)puVar4,uVar6,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar5,*(undefined8 *)puVar2,param_3,0);
    uVar6 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JourneyPosterUnlocked_2db90e8
                      ((long)param_2,param_3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar6,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

