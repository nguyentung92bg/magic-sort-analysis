/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassNameStyleSelectionToolbarButton$$UpdateToolbarButton
void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassNameStyleSelectionToolbarButton__UpdateToolbarButton (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassNameStyleSelectionToolbarButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassNameStyleSelectionToolbarButton$$UpdateToolbarButton
   void 
   Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassNameStyleSelectionToolbarButton__UpdateToolbarButton
   (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassNameStyleSelectionToolbarButton_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassNameStyleSelectionToolbarButton__UpdateToolbarButton_38e48c8
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
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c34c5e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057a7df0);
    bRam0000000005c34c5e = 1;
  }
  if ((((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
       (lVar8 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar8 != 0)) &&
      (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar8,*(undefined8 *)PTR_DAT_057dc218), lVar8 != 0)) &&
     (*(long *)(lVar8 + 0x10) != 0)) {
    uVar9 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassDataService__IsPassActivated_3d021a0
                      (*(long *)(lVar8 + 0x10),0);
    if ((uVar9 & 1) == 0) {
      bVar6 = 1;
    }
    else {
      lVar8 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetMagicPassNameStyleInfo_38deb34
                        (lVar8);
      if (lVar8 == 0) goto LAB_039e49dc;
      bVar6 = Modules_Contexts_Application_Player_Scripts_ProfileNameStyleInfo__get_IsValid_137a1ac
                        (lVar8,0);
      bVar6 = ~bVar6 & 1;
    }
    puVar4 = PTR_DAT_057bc5e8;
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x67) = bVar6;
      puVar5 = PTR_DAT_057a7df0;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039e4894 with catch @ 039e49b4
                       try { // try from 039e49b4 to 03ae49d7 has its CatchHandler @ 039e485c */
      uVar10 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                         (*(undefined8 *)puVar5,0);
      puVar4 = PTR_DAT_057ee588;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039e48b0 with catch @ 039e49c0
                        */
                    /* try { // try from 039e49d8 to 03ae49ef has its CatchHandler @ 039e4ad4 */
      if ((bRam0000000005c2fc80 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057ee588,uVar10,0,0);
        bRam0000000005c2fc80 = 1;
      }
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
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
LAB_039e49dc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

