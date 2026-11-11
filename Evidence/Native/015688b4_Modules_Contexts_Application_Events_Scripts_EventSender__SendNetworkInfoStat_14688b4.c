/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendNetworkInfoStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendNetworkInfoStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_ValueTuple_List_string___int__int__o networkInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendNetworkInfoStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendNetworkInfoStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   System_ValueTuple_List_string___int__int__o networkInfo, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendNetworkInfoStat_14688b4
               (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
                    /* catch() { ... } // from try @ 015686fc with catch @ 015688b4 */
  puVar1 = PTR_DAT_057c8a60;
                    /* catch() { ... } // from try @ 015686ec with catch @ 015688b8 */
                    /* catch() { ... } // from try @ 015686c0 with catch @ 015688bc */
                    /* catch() { ... } // from try @ 0156869c with catch @ 015688c0 */
                    /* catch() { ... } // from try @ 0156868c with catch @ 015688c4 */
                    /* catch() { ... } // from try @ 01568674 with catch @ 015688c8 */
                    /* try { // try from 015688e0 to 016688f7 has its CatchHandler @ 015689a8 */
  if ((bRam0000000005c237c1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 015688f8 to 01668997 has its CatchHandler @ 01568558 */
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057dbb00);
    FUN_012d0dc8(PTR_DAT_0576cd98);
    FUN_012d0dc8(PTR_DAT_057899e8);
    FUN_012d0dc8(PTR_DAT_057eedc0);
    FUN_012d0dc8(PTR_DAT_058123f8);
    FUN_012d0dc8(PTR_DAT_057fc560);
    FUN_012d0dc8(PTR_DAT_057daf00);
    FUN_012d0dc8(PTR_DAT_0578c918);
    bRam0000000005c237c1 = 1;
  }
  iStack_54 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
                    /* try { // try from 01568998 to 016689a7 has its CatchHandler @ 015689a8 */
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar5,*(undefined8 *)PTR_DAT_0578c918,0);
    puVar4 = PTR_DAT_058123f8;
    puVar3 = PTR_DAT_057fc560;
    puVar2 = PTR_DAT_057899e8;
    puVar1 = PTR_DAT_0576cd98;
    iStack_54 = 0;
    if (param_2 != 0) {
                    /* catch() { ... } // from try @ 015688e0 with catch @ 015689a8
                       catch() { ... } // from try @ 01568998 with catch @ 015689a8 */
                    /* try { // try from 015689ac to 016689af has its CatchHandler @ 015689b8 */
                    /* try { // try from 015689b0 to 016689bb has its CatchHandler @ 01568558 */
                    /* catch() { ... } // from try @ 015689ac with catch @ 015689b8 */
      if (0 < *(int *)(param_2 + 0x18)) {
        do {
          if (iStack_54 == 0) {
            uVar6 = *(undefined8 *)puVar2;
            iVar9 = 0;
          }
          else {
            uVar6 = System_Int32__ToString_26c9768(&iStack_54,0);
            uVar6 = System_String__Concat_1ec3580(*(undefined8 *)puVar4,uVar6,0);
            iVar9 = iStack_54;
          }
          uVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (param_2,iVar9,*(undefined8 *)puVar1);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar5,uVar6,uVar7,0);
          iStack_54 = iStack_54 + 1;
        } while (iStack_54 < *(int *)(param_2 + 0x18));
      }
      puVar2 = PTR_DAT_057db748;
      uVar6 = System_String__Join_1ed1a7c(*(undefined8 *)puVar3,param_2,0);
      puVar1 = PTR_DAT_057daf00;
      iVar9 = (int)param_3;
      if (0 < iVar9) {
        iStack_58 = iVar9;
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar5,*(undefined8 *)puVar1,uVar7,0);
      }
      puVar3 = PTR_DAT_057eedc0;
      puVar1 = PTR_DAT_0575f9f0;
      iVar8 = (int)((ulong)param_3 >> 0x20);
      if (0 < iVar8) {
        iStack_5c = iVar8;
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_5c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar5,*(undefined8 *)puVar3,uVar7,0);
      }
      uVar6 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StartupNetworkInfo_2db4ddc
                        (uVar6,(long)iVar9,param_3 >> 0x20,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar6,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
                (param_1,lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01568b38 to 01668d13 has its CatchHandler @ 01568b38
                       catch() { ... } // from try @ 01568b38 with catch @ 01568b38
                       catch() { ... } // from try @ 01568d6c with catch @ 01568b38
                       catch() { ... } // from try @ 01568db8 with catch @ 01568b38
                       catch() { ... } // from try @ 01568e04 with catch @ 01568b38 */
  FUN_012d0ef0();
}

