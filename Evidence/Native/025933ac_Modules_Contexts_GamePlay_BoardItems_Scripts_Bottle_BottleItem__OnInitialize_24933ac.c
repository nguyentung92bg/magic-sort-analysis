/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnInitialize
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnInitialize (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnInitialize
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnInitialize
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnInitialize_24933ac
               (long param_1)

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
  
  if ((bRam0000000005c2b2c3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ce228);
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057ddcb0);
    FUN_012d0dc8(PTR_DAT_057a1cf0);
    FUN_012d0dc8(PTR_DAT_05764cd8);
    FUN_012d0dc8(PTR_DAT_057e11f8);
    FUN_012d0dc8(PTR_DAT_05805c38);
    FUN_012d0dc8(PTR_DAT_057c6be8);
    FUN_012d0dc8(PTR_DAT_05815458);
    bRam0000000005c2b2c3 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 != (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_057ce228;
    bVar2 = *(byte *)(lVar9 + 300);
    if ((bVar2 <= *(byte *)(*plVar8 + 300)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar2 - 1) * 8) == lVar9)) {
      *(long **)(param_1 + 0x50) = plVar8;
      if ((bVar2 <= *(byte *)(*plVar8 + 300)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar2 - 1) * 8) == lVar9)) goto LAB_025934c0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar8,lVar9);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_025934c0:
  puVar6 = PTR_DAT_057c6be8;
  FUN_012d0d74();
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
  puVar6 = PTR_DAT_05805c38;
  if (lVar9 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_057a1cf0);
    *(long *)(param_1 + 0x80) = lVar9;
    FUN_012d0d74((long *)(param_1 + 0x80),lVar9);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
    puVar6 = PTR_DAT_057e11f8;
    if (lVar9 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_057ddcb0);
      *(long *)(param_1 + 0x88) = lVar9;
      FUN_012d0d74((long *)(param_1 + 0x88),lVar9);
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
      puVar5 = PTR_DAT_05764cd8;
      if (lVar9 != 0) {
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar9,*(undefined8 *)PTR_DAT_05764cd8);
        *(long *)(param_1 + 0x90) = lVar9;
        FUN_012d0d74((long *)(param_1 + 0x90),lVar9);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
        puVar6 = PTR_DAT_05815458;
        if (lVar9 != 0) {
          System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)puVar5);
          *(long *)(param_1 + 0x98) = lVar9;
          FUN_012d0d74((long *)(param_1 + 0x98),lVar9);
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
          if (lVar9 != 0) {
            Modules_Infrastructure_Common_Scripts_Component_Lock___ctor_40eabc8(lVar9,0);
            *(long *)(param_1 + 0x40) = lVar9;
            FUN_012d0d74((long *)(param_1 + 0x40),lVar9);
            lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
            if (lVar9 != 0) {
              Modules_Infrastructure_Common_Scripts_Component_Lock___ctor_40eabc8(lVar9,0);
              *(long *)(param_1 + 0xb0) = lVar9;
              FUN_012d0d74((long *)(param_1 + 0xb0),lVar9);
              lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
              puVar6 = PTR_DAT_0576aae0;
              if (lVar9 != 0) {
                Modules_Infrastructure_Common_Scripts_Component_Lock___ctor_40eabc8(lVar9,0);
                *(long *)(param_1 + 0xb8) = lVar9;
                FUN_012d0d74((long *)(param_1 + 0xb8),lVar9);
                if ((**(long **)(*(long *)puVar6 + 0xb8) != 0) &&
                   (lVar9 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar9 != 0)) {
                  uVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar9,*(undefined8 *)PTR_DAT_0575c3c8);
                  puVar10 = (undefined8 *)(param_1 + 200);
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

