/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$OnInitialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__OnInitialize (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$OnInitialize
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__OnInitialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__OnInitialize_274d1f8(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if ((bRam0000000005c2c6d0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057a3740);
    FUN_012d0dc8(PTR_DAT_05800018);
    FUN_012d0dc8(PTR_DAT_057fd598);
    bRam0000000005c2c6d0 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 != (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_057a3740;
    bVar2 = *(byte *)(lVar9 + 300);
    if ((bVar2 <= *(byte *)(*plVar8 + 300)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar2 - 1) * 8) == lVar9)) {
      *(long **)(param_1 + 0x48) = plVar8;
      if ((bVar2 <= *(byte *)(*plVar8 + 300)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar2 - 1) * 8) == lVar9)) goto LAB_0284d2dc;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar8,lVar9);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
LAB_0284d2dc:
  puVar5 = PTR_DAT_057fd598;
  FUN_012d0d74();
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar6 = PTR_DAT_05800018;
  if (lVar9 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_05800018);
    *(long *)(param_1 + 0x58) = lVar9;
    FUN_012d0d74((long *)(param_1 + 0x58),lVar9);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    puVar5 = PTR_DAT_0576aae0;
    if (lVar9 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)puVar6);
      *(long *)(param_1 + 0x78) = lVar9;
      FUN_012d0d74((long *)(param_1 + 0x78),lVar9);
      lVar9 = **(long **)(*(long *)puVar5 + 0xb8);
      if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) &&
         (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar9,*(undefined8 *)PTR_DAT_05805608), lVar9 != 0)) {
        uVar7 = Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetIceConfig_160c470
                          (lVar9,0);
        *(undefined8 *)(param_1 + 0x70) = uVar7;
        FUN_012d0d74();
        lVar9 = **(long **)(*(long *)puVar5 + 0xb8);
        if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
          uVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar9,*(undefined8 *)PTR_DAT_0575c3c8);
          puVar10 = (undefined8 *)(param_1 + 0x80);
          *puVar10 = uVar7;
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

