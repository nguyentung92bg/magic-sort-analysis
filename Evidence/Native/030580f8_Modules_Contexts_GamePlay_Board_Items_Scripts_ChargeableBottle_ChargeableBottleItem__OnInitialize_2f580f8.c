/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$OnInitialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__OnInitialize (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$OnInitialize
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__OnInitialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__OnInitialize_2f580f8
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
  
  if ((bRam0000000005c308b9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bf0f8);
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c308b9 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_057bf0f8;
    bVar2 = *(byte *)(lVar8 + 300);
    if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar8)) {
      *(long **)(param_1 + 0x48) = plVar7;
      if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar8)) goto LAB_030581b4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar7,lVar8);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
LAB_030581b4:
  puVar5 = PTR_DAT_0576aae0;
  FUN_012d0d74();
  if ((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar8 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar8,*(undefined8 *)PTR_DAT_0575c3c8);
    puVar9 = (undefined8 *)(param_1 + 0x60);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

