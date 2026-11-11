/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$OnInitialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnInitialize (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$OnInitialize
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnInitialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnInitialize_230a794
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if ((bRam0000000005c2a670 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05800018);
    FUN_012d0dc8(PTR_DAT_057fd598);
    FUN_012d0dc8(PTR_DAT_05802950);
    bRam0000000005c2a670 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_05802950;
    bVar2 = *(byte *)(lVar8 + 300);
                    /* try { // try from 0240a824 to 0250a94b has its CatchHandler @ 0240a824
                       catch() { ... } // from try @ 0240a824 with catch @ 0240a824
                       catch() { ... } // from try @ 0240aa98 with catch @ 0240a824
                       catch() { ... } // from try @ 0240ab24 with catch @ 0240a824
                       catch() { ... } // from try @ 0240ab2c with catch @ 0240a824
                       catch() { ... } // from try @ 0240abd0 with catch @ 0240a824 */
    if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar8)) {
      *(long **)(param_1 + 0x48) = plVar7;
      if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar8)) goto LAB_0240a868;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar7,lVar8);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
LAB_0240a868:
  puVar5 = PTR_DAT_057fd598;
  FUN_012d0d74();
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_0576aae0;
  if (lVar8 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar8,*(undefined8 *)PTR_DAT_05800018);
    *(long *)(param_1 + 0x58) = lVar8;
    FUN_012d0d74((long *)(param_1 + 0x58),lVar8);
    if ((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
       (lVar8 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar8 != 0)) {
      uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar8,*(undefined8 *)PTR_DAT_0575c3c8);
      puVar9 = (undefined8 *)(param_1 + 0x68);
      *puVar9 = uVar6;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

