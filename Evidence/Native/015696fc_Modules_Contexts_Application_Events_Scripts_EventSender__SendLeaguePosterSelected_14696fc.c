/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendLeaguePosterSelected
void Modules_Contexts_Application_Events_Scripts_EventSender__SendLeaguePosterSelected (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendLeaguePosterSelected
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendLeaguePosterSelected
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendLeaguePosterSelected_14696fc
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  int iStack_58;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_057c8a60;
                    /* try { // try from 01569718 to 01669727 has its CatchHandler @ 01569728 */
                    /* catch() { ... } // from try @ 01569624 with catch @ 01569728
                       catch() { ... } // from try @ 01569718 with catch @ 01569728 */
                    /* try { // try from 0156972c to 0166972f has its CatchHandler @ 01569738 */
  if ((bRam0000000005c237c7 & 1) == 0) {
                    /* try { // try from 01569730 to 0166973b has its CatchHandler @ 01569594 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0156972c with catch @ 01569738
                        */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 0156973c to 016697bf has its CatchHandler @ 0156973c
                       catch() { ... } // from try @ 0156973c with catch @ 0156973c
                       catch() { ... } // from try @ 015698a0 with catch @ 0156973c
                       catch() { ... } // from try @ 015698ec with catch @ 0156973c
                       catch() { ... } // from try @ 015699e0 with catch @ 0156973c */
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057990c0);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c237c7 = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0576aae0;
  if (lVar7 != 0) {
                    /* try { // try from 015697c0 to 016697c7 has its CatchHandler @ 015698b4 */
                    /* try { // try from 015697cc to 016697d3 has its CatchHandler @ 015698b0 */
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar7,*(undefined8 *)PTR_DAT_057990c0,0);
                    /* try { // try from 015697f0 to 016697f3 has its CatchHandler @ 015698b8 */
                    /* try { // try from 015697f4 to 01669803 has its CatchHandler @ 015698bc */
    if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
        (lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar8 != 0)) &&
       (plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar8,*(undefined8 *)PTR_DAT_057a1e60),
       puVar5 = PTR_DAT_057db748, puVar4 = PTR_DAT_057caaf0, puVar3 = PTR_DAT_057ab1a0,
       puVar2 = PTR_DAT_057636d0, plVar9 != (long *)0x0)) {
      lVar8 = *plVar9;
                    /* try { // try from 01569814 to 01669817 has its CatchHandler @ 015698b4 */
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    /* try { // try from 01569818 to 0166982f has its CatchHandler @ 015698a4 */
      if (uVar12 != 0) {
                    /* try { // try from 01569830 to 01669837 has its CatchHandler @ 015698a0 */
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 0156983c to 01669857 has its CatchHandler @ 015698a8 */
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_01569870;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
                    /* try { // try from 0156985c to 0166989f has its CatchHandler @ 015698ac */
LAB_01569870:
      puVar1 = PTR_DAT_0575f9f0;
      uStack_54 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_54);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01569830 with catch @ 015698a0
                       try { // try from 015698a0 to 016698d3 has its CatchHandler @ 0156973c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01569818 with catch @ 015698a4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0156983c with catch @ 015698a8
                        */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)puVar4,uVar11,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0156985c with catch @ 015698ac
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015697cc with catch @ 015698b0
                        */
      iStack_58 = param_2;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015697c0 with catch @ 015698b4
                       catch(type#1 @ 054cbd58) { ... } // from try @ 01569814 with catch @ 015698b4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015697f0 with catch @ 015698b8
                        */
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_58);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015697f4 with catch @ 015698bc
                        */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)puVar3,uVar11,0);
      lVar8 = *plVar9;
                    /* try { // try from 015698d4 to 016698eb has its CatchHandler @ 015699d8 */
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 015698ec to 016699c7 has its CatchHandler @ 0156973c */
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_01569920;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,1);
LAB_01569920:
      iVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JourneyMasterLeaguePosterSelected_2dae524
                         ((long)iVar6,(long)param_2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

