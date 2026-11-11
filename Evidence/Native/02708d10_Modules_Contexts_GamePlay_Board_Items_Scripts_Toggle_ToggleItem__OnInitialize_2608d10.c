/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OnInitialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnInitialize (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OnInitialize
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnInitialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnInitialize_2608d10
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
  
  if ((bRam0000000005c2b9ca & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bfb70);
    bRam0000000005c2b9ca = 1;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_057bfb70;
    bVar2 = *(byte *)(lVar8 + 300);
    if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar8)) {
      *(long **)(param_1 + 0x48) = plVar7;
      if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar8)) goto LAB_02708dcc;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar7,lVar8);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
LAB_02708dcc:
                    /* try { // try from 02708dcc to 02808e0b has its CatchHandler @ 02708dcc
                       catch() { ... } // from try @ 02708dcc with catch @ 02708dcc
                       catch() { ... } // from try @ 02708e20 with catch @ 02708dcc
                       catch() { ... } // from try @ 02708e5c with catch @ 02708dcc
                       catch() { ... } // from try @ 02708e9c with catch @ 02708dcc */
  puVar5 = PTR_DAT_0576aae0;
  FUN_012d0d74();
  if ((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar8 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar8,*(undefined8 *)PTR_DAT_0575c3c8);
    puVar9 = (undefined8 *)(param_1 + 0x60);
    *puVar9 = uVar6;
                    /* try { // try from 02708e0c to 02808e1f has its CatchHandler @ 02708e2c */
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

