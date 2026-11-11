/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassFrameSelectionToolbarButton$$UpdateToolbarButton
void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassFrameSelectionToolbarButton__UpdateToolbarButton (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassFrameSelectionToolbarButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassFrameSelectionToolbarButton$$UpdateToolbarButton
   void 
   Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassFrameSelectionToolbarButton__UpdateToolbarButton
   (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassFrameSelectionToolbarButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassFrameSelectionToolbarButton__UpdateToolbarButton_38e2d88
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  
                    /* try { // try from 039e2d88 to 03ae2d93 has its CatchHandler @ 039e2b08 */
  puVar5 = PTR_DAT_0576aae0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039e2d84 with catch @ 039e2d90
                        */
                    /* catch() { ... } // from try @ 039e2e4c with catch @ 039e2d94
                       catch() { ... } // from try @ 039e2e9c with catch @ 039e2d94
                       catch() { ... } // from try @ 039e2ec8 with catch @ 039e2d94
                       catch() { ... } // from try @ 039e2f4c with catch @ 039e2d94 */
  if ((bRam0000000005c34c4d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
                    /* try { // try from 039e2dd4 to 03ae2dd7 has its CatchHandler @ 039e2e64 */
    FUN_012d0dc8(PTR_DAT_0575e018);
    bRam0000000005c34c4d = 1;
  }
                    /* try { // try from 039e2e00 to 03ae2e0f has its CatchHandler @ 039e2e68 */
  if ((((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
       (lVar8 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar8 != 0)) &&
      (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar8,*(undefined8 *)PTR_DAT_057dc218), lVar8 != 0)) &&
     (*(long *)(lVar8 + 0x10) != 0)) {
    uVar9 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassDataService__IsPassActivated_3d021a0
                      (*(long *)(lVar8 + 0x10),0);
    if ((uVar9 & 1) == 0) {
      bVar6 = 1;
    }
    else {
      lVar8 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetMagicPassFrameInfo_38deaa4
                        (lVar8);
      if (lVar8 == 0) goto LAB_039e2e9c;
                    /* try { // try from 039e2e34 to 03ae2e4b has its CatchHandler @ 039e2e6c */
      bVar6 = Modules_Contexts_Application_Player_Scripts_ProfileFrameInfo__get_IsValid_1379e0c
                        (lVar8,0);
      bVar6 = ~bVar6 & 1;
    }
    puVar5 = PTR_DAT_057bc5e8;
    lVar8 = *(long *)(param_1 + 0x18);
                    /* try { // try from 039e2e4c to 03ae2e83 has its CatchHandler @ 039e2d94 */
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x67) = bVar6;
      puVar4 = PTR_DAT_0575e018;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039e2dd4 with catch @ 039e2e64
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039e2e00 with catch @ 039e2e68
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039e2e34 with catch @ 039e2e6c
                        */
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar10 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                         (*(undefined8 *)puVar4,0);
      puVar5 = PTR_DAT_057ee588;
                    /* try { // try from 039e2e84 to 03ae2e9b has its CatchHandler @ 039e2f44 */
      if ((bRam0000000005c2fc80 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057ee588,uVar10,0,0);
        bRam0000000005c2fc80 = 1;
      }
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
      if (lVar7 != 0) {
        System_Object___ctor_23dfe5c(lVar7,0);
        *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(lVar8 + 0x5c);
        *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x48);
        FUN_012d0d74();
        *(undefined1 *)(lVar7 + 0x38) = *(undefined1 *)(lVar8 + 0x58);
        *(undefined8 *)(lVar7 + 0x20) = uVar10;
        FUN_012d0d74((undefined8 *)(lVar7 + 0x20),uVar10);
        *(undefined8 *)(lVar7 + 0x28) = 0;
        FUN_012d0d74((undefined8 *)(lVar7 + 0x28),0);
        *(long *)(lVar7 + 0x10) = lVar8;
        FUN_012d0d74((long *)(lVar7 + 0x10),lVar8);
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar8 + 0x48);
        FUN_012d0d74();
        *(undefined4 *)(lVar7 + 0x40) = *(undefined4 *)(lVar8 + 0x60);
        *(undefined1 *)(lVar7 + 0x39) = *(undefined1 *)(lVar8 + 0x65);
        *(undefined1 *)(lVar7 + 0x3a) = *(undefined1 *)(lVar8 + 0x66);
        plVar11 = (long *)(lVar8 + 0x68);
        *plVar11 = lVar7;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_039e2e9c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 039e2e9c to 03ae2eaf has its CatchHandler @ 039e2d94 */
  FUN_012d0ef0();
}

